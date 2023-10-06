#include <stddef.h>
#include "problem2.h"


void lower(char* str)
{
    if(str == NULL){
        return;
    }
  // Fill in this function


    while(*str){
        if('A'<=*str&&*str<='Z'){
            *str = *str + 32;
        }
        str++;
    }

}

