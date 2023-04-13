#include <stdlib.h>
#include <stdio.h>



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1])
		l1++;

	str = malloc(sizeof(char) * (l1 + n + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; j < n && s2[j]; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';

	return (str);

}
