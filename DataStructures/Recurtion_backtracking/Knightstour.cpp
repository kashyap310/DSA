#include <iostream>
using namespace std;
#define BOARD 3

void printSolution(int sol[BOARD][BOARD])
{
    for (int i = 0; i < BOARD; i++)
    {
        for (int j = 0; j < BOARD; j++)
        {
            cout << sol[i][j] << "\t";
        }
        cout << endl;
    }
}

bool isSafe(int x, int y, int sol[BOARD][BOARD])
{
    return (x >= 0 && x < BOARD && y >= 0 && y < BOARD && sol[x][y] == -1); // check if current position is valid or not
}

int solveKT(int x, int y, int move, int xMove[8], int yMove[8], int sol[BOARD][BOARD])
{
    if (move == BOARD * BOARD)
    {
        return 1;
    }

    int nextMoveX, nextMoveY;
    for (int k = 0; k < 8; k++)
    {
        nextMoveX = x + xMove[k];
        nextMoveY = y + yMove[k];
        if (isSafe(nextMoveX, nextMoveY, sol))
        {
            sol[nextMoveX][nextMoveY] = move;
            
            if (solveKT(nextMoveX, nextMoveY, move + 1, xMove, yMove, sol) == 1) //checks for next move and goes until move ==BOARD*BOARD if position is safe else pos is not safe assignt to -1
            {   return 1;
            }
            else
            {
                sol[nextMoveX][nextMoveY] = -1;
            }
        }
    }

    return 0;
}

void utils()
{
    
    int xMove[8] = {2, 1, -1, -2, -2, -1, 1, 2}; // possible x position related to y
    int yMove[8] = {1, 2, 2, 1, -1, -2, -2, -1};
    int x = 0, y = 0; // starting position
    int sol[BOARD][BOARD];
    for (int i = 0; i < BOARD; i++)
    {
        for (int j = 0; j < BOARD; j++)
        {
            sol[i][j] = -1;
        }
    }
    sol[0][0]=0;  //starting position of knight
    if (solveKT(x, y, 1, xMove, yMove, sol) == 0)
    {
        cout << "No solution for Board size " <<BOARD<< endl;
        printSolution(sol);
    }
    else
    {
        printSolution(sol);
    };
}

int main()
{

    utils();

    return 0;
}