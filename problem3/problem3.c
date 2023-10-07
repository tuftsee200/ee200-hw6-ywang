#include <stdio.h>
#include "problem3.h"

void find_frequency(const char* str, int len, unsigned int histogram[26])
{
    if(!str){
        printf("your input is NULL, please don't..\n\n");
        return;
    }
    
    for(int i=0; i<=25; i++){
        histogram[i] = 0;      //initialize the histogram to 0
    }

    for(int i=0; i<len && str[i]!='\0'; i++){
        char c1 = str[i];     //traverse the string and esure not to go beyond its bounds

        if(c1>='A' && c1<='Z'){
            c1 = c1-'A'+'a';     //convert the characters to lowercase
        }

        if('a'<=c1 && c1<='z'){
            histogram[c1-'a']++;    //update
        }
    }


                      //print result
    printf("the result of your String \"%s\" is:\n", str);
        for(int i = 0; i <= 25; i++){
            if(histogram[i]>0){
                printf("{%c's frequency is %u}\n", 'a'+i, histogram[i]);
            }
        }

        printf("\n\n");

}

