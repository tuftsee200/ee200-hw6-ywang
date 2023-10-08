#include <stddef.h>
#include "problem4.h"
#include <string.h>

//find the shortest string of an array, return the pointer
const char* find_shortest(const char * const * strings, int len)
{
    //check whether the strings is NULL before any operation
    if(!strings){
        return NULL;
    }

    //assume the first string the shortest one
    const char* shortest = strings[0];
    int minL = 0;

    //find the first non-NULL string
    while(!shortest && minL<len){
        shortest = strings[minL];
        minL++;
    }

    //all Nulls return Null
    if(!shortest)
        return NULL;

    //iterate through the remaining
    for(int i = minL; i<len; i++){
        if(strings[i] && strlen(strings[i])<strlen(shortest)){
            shortest = strings[i];
        }
    }

    return shortest;


}

