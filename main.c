#include <stdio.h>
#include "src/string.h"

main(void) {
    puts(strnstr("Hello world gerge", "world", 16));
}
