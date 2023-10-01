#include "map.h"

void map(int * input, int *output, int length,int (*add_function)(int))
{
    
    for (int i = 0; i < length; i++)
        *(output+i) = add_function(*(input+i)); 
}
