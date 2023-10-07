#include <stddef.h>
#include "problem3.h"


int main(int argc, char* argv[])
{
    char *test1 = NULL;
    char test2[] = "do you love me???";
    char test3[] = "Yunpeng Wang at Tufts University";
    char test4[] = "";
    unsigned int h[26];

    find_frequency(test1, 0, h);
    find_frequency(test2, sizeof(test2)-1, h);
    find_frequency(test3, sizeof(test3), h);
    find_frequency(test4, sizeof(test4)-1, h);

  // Put anything here that you think is appropriate to test your function

  return(0);
}

