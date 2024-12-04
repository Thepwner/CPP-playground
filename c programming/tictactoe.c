#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void initializeBoard();
int isMoveValid(int currentMove, char board[]);
void printBoard(char board[]);
int isWinner(int currentMove, char board[]);

int main()
{
    char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char input[10];
    char currentPlayer;
    int currentMove;

    printf("Tic-Tac-Toe Two-player Mode\nIndex for player 'X' and 'O':\n\n");
    initializeBoard();

    for (int i = 0; i < 9; i++)
    {
        currentPlayer = (i % 2) ? 'X' : 'O';
        printf("Player %c: ", currentPlayer);
        scanf("%s", input);
        if (isdigit(input[0]) && input[1] == '\0')
        {
            currentMove = atoi(input) - 1;
            if (isMoveValid(currentMove, board))
            {
                board[currentMove] = currentPlayer;
                printBoard(board);
                if (isWinner(currentMove, board))
                {
                    printf("Player %c wins!\n", currentPlayer);
                    exit(0);
                }
            }
            else
            {
                printf("Invalid move! Position already occupied or Zero input. Try again.\n\n");
                i--;
            }
        }
        else
        {
            printf("Error: Multi-character or invalid inputs are not allowed. Enter a single digit between 1 and 9.\nTry again.\n\n");
            i--;
        }
        printf("\n%s\n", (i == 8) ? "Draw" : "NextTurn");
    }

    return 0;
}

void initializeBoard()
{
    int j = 1;
    for (int i = 1; i <= 3; i++)
    {
        printf("  %d  |  %d  |  %d  \n", j, j + 1, j + 2);
        printf("- - -|- - -|- - -\n");
        j += 3;
    }
    printf("\n");
};
int isMoveValid(int currentMove, char board[])
{
    if (board[currentMove] == ' ')
        return 1;
    else
        return 0;
};
void printBoard(char board[])
{
    int j = 0;
    for (int i = 1; i <= 3; i++)
    {
        printf("  %c  |  %c  |  %c  \n", board[j], board[j + 1], board[j + 2]);
        printf("- - -|- - -|- - -\n");
        j += 3;
    }
    printf("\n");
};
int isWinner(int currentMove, char board[])
{
    int winnerCondition[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[winnerCondition[i][0]] != ' ' && board[winnerCondition[i][0]] == board[winnerCondition[i][1]] && board[winnerCondition[i][1]] == board[winnerCondition[i][2]])
            {
                return 1;
            }
        }
    }
    return 0;
};
