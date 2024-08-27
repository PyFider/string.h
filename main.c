#include <stdio.h>
#include "src/string.h"
 
main(int argc, const char **argv)
{
	char *s = NULL;
	int c = 'e';
	puts((const char *)strrchr(s, c));
}
