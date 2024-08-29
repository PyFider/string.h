#include <stdio.h>
#include <stdlib.h>
#include "src/string.h"

main(void)
{
	const char *s2 = "word";
	char *s1 = "Hello world!"; 

	puts(s1);
	puts((const char *)memmove((void *)s1, (const void *)s2, 5));
	puts(s1);
}
