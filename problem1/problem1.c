#include "problem1.h"


char check_win(char board[3][3])
{
    //initialize counters;
    int countX = 0;
    int countO = 0;
    int countSpace = 0;
    //update counter
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            if(board[i][j] == 'x') countX++;
            else if(board[i][j] == 'o') countO++;
            else if(board[i][j] == ' ') countSpace++;
            else return '\0';
        }

    //check various conditions including (space)(cat's game)and(NULL)

    //check and return if more 'x' or 'o' than would be possible
    if(countX - countO > 1 || countO - countX > 1) return '\0';
    //won conditions
    //column and row
    for(int i = 0; i < 3; i++){
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return board[0][i];
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0];
    }
    //diagonally
    if(board[1][1] == board[2][2] && board[2][2] == board[0][0])
        return board[1][1];
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2];

    //check and return if the game is still going
    if(countSpace > 0) return ' ';

    //the last condition that "no one has won"
    return '.';
    


  //return(0); // Edit this to return something meaningful
}

