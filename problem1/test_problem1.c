#include <stdio.h>
#include "problem1.h"


int main(int argc, char* argv[])
{
    char B1[3][3] = {
        {'x', ' ', ' '},
        {'o', 'x', 'o'},
        {'o', 'o', 'x'}
    };

    char B2[3][3] = {
        {'o', 'x', 'x'},
        {'x', 'o', 'x'},
        {'o', 'x', 'o'}
    };

    char B3[3][3] = {
        {'o', 'o', 'x'},
        {'o', 'x', 'o'},
        {'o', 'x', 'x'}
    };

    char B4[3][3] = {
        {'$', ' ', '%'},
        {'o', 'x', 'o'},
        {'x', 'o', 'x'}
    };

    char B5[3][3] = {
        {'x', 'x', 'o'},
        {'x', 'x', 'o'},
        {'x', 'x', 'o'}
    };

    char B6[3][3] = {
        {'x', 'x', 'o'},
        {'o', 'o', 'x'},
        {'x', 'x', 'o'}
    };

    char B7[3][3] = {
        {' ', ' ', 'o'},
        {' ', 'x', ' '},
        {'x', ' ', ' '}
    };

    printf("\nthe result of B1 is \"%C\"\n", check_win(B1));
    printf("\nthe result of B2 is \"%C\"\n", check_win(B2));
    printf("\nthe result of B3 is \"%C\"\n", check_win(B3));
    printf("\nthe result of B4 is \"%C\"\n", check_win(B4));
    printf("\nthe result of B5 is \"%C\"\n", check_win(B5));
    printf("\nthe result of B6 is \"%C\"\n", check_win(B6));
    printf("\nthe result of B7 is \"%C\"\n", check_win(B7));


  // Put anything here that you think is appropriate to test your function

  return(0);
}

