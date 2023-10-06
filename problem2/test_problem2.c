#include <stdio.h>
#include "problem2.h"


int main(int argc, char* argv[])
{
    char test1[] = "Wang Yunpeng WYP!";
    char test2[] = "";
    char *test3 = NULL;
    char test4[] = "qwe123123";

    lower(test1);
    lower(test2);
    lower(test3);
    lower(test4);

    printf("%s\n\n", test1);
    printf("%s\n\n", test2);
    printf("%s\n\n", test3);
    printf("%s\n\n", test4);

    return 0;
  // Put anything here that you think is appropriate to test your function
}

