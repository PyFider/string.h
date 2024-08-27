#include <stdio.h>
#include <stdlib.h>
#include "src/string.h"

main(void)
{
    const char *s1, *s2;
    
    s1 = "w o rl d!";
    s2 = "Hello w o r l d!";
    printf("%lu\n", strcspn(s1, s2));

    return 0;
}
