#include "stdio.h"
#include "problem4.h"


int main(int argc, char* argv[])
{
    const char* strings1[] = {"apple", "kiwi", "durian"};
    const char* strings2[] = {NULL, "apple", "kiwi", "durian"};
    const char* strings3[] = {"apple", NULL, "kiwi", "durian"};
    const char* strings4[] = {NULL, NULL};
    const char* strings5[] = {"durian"};

    printf("shortest string in strings1 is: %s\n", find_shortest(strings1, 3));
    printf("shortest string in strings2 is: %s\n", find_shortest(strings2, 4));
    printf("shortest string in strings3 is: %s\n", find_shortest(strings3, 4));
    printf("shortest string in strings4 is: %s\n", find_shortest(strings4, 2));
    printf("shortest string in strings5 is: %s\n", find_shortest(strings5, 1));
  // Put anything here that you think is appropriate to test your function

  return(0);
}

