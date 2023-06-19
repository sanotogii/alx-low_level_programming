#ifndef _ABS_
#define _ABS_

#define ABS(X) X
#if X < 0
	#define ABS(x) (-1)*(X)
#endif
