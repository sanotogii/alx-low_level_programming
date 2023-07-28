#include "main.h"

int main(int argc, char *argv[])
{
	const char *from, *to;
	char buffer[1024];
	ssize_t w, r;
	int s, d;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	from = argv[1];
	to = argv[2];
	s = open(from, O_RDONLY);
	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	d = open(to, O_RDONLY | O_CREAT | O_TRUNC);

	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}
	while ((r = read(s, buffer, 1024)) > 0)
	{
		w = write(d, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	if (close(s) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", s);
		exit(100);
	}
	if (close(d) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
	return (0);
}
