#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool str2int( const char string[], int * number){
    char nextchar;
    return (sscanf(string, "%d%c", number, &nextchar) == 1);
}
