// A Backtracking program  in C++ to solve Sudoku problem
#include <stdio.h>
#include <iostream>
#include <cstring>
// UNASSIGNED is used for empty cells in sudoku grid
#define UNASSIGNED 0
using namespace std;
// N is used for size of Sudoku grid. Size will be NxN
//#define N 9
static int N=410;
// This function finds an entry in grid that is still unassigned
bool FindUnassignedLocation(int grid[][410], int &row, int &col,int N);

// Checks whether it will be legal to assign num to the given row,col
bool isSafe(int grid[][410], int row, int col, int num,int N);

/* Takes a partially filled-in grid and attempts to assign values to
  all unassigned locations in such a way to meet the requirements
  for Sudoku solution (non-duplication across rows, columns, and boxes) */
bool SolveSudoku(int grid[][410],int N)
{
    int row, col;

    // If there is no unassigned location, we are done
    if (!FindUnassignedLocation(grid, row, col,N))
       return true; // success!

    // consider digits 1 to 9
    for (int num = 1; num <= N; num++)
    {
        // if looks promising
        if (isSafe(grid, row, col, num,N))
        {
            // make tentative assignment
            grid[row][col] = num;

            // return, if success, yay!
            if (SolveSudoku(grid,N))
                return true;

            // failure, unmake & try again
            grid[row][col] = UNASSIGNED;
        }
    }
    return false; // this triggers backtracking
}

/* Searches the grid to find an entry that is still unassigned. If
   found, the reference parameters row, col will be set the location
   that is unassigned, and true is returned. If no unassigned entries
   remain, false is returned. */
bool FindUnassignedLocation(int grid[][410], int &row, int &col,int N)
{
    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (grid[row][col] == UNASSIGNED)
                return true;
    return false;
}

/* Returns a boolean which indicates whether any assigned entry
   in the specified row matches the given number. */
bool UsedInRow(int grid[][410], int row, int num,int N)
{
    for (int col = 0; col < N; col++)
        if (grid[row][col] == num)
            return true;
    return false;
}

/* Returns a boolean which indicates whether any assigned entry
   in the specified column matches the given number. */
bool UsedInCol(int grid[][410], int col, int num,int N)
{
    for (int row = 0; row < N; row++)
        if (grid[row][col] == num)
            return true;
    return false;
}

/* Returns a boolean which indicates whether any assigned entry
   within the specified 3x3 box matches the given number. */


/* Returns a boolean which indicates whether it will be legal to assign
   num to the given row,col location. */
bool isSafe(int grid[][410], int row, int col, int num,int N)
{
    /* Check if 'num' is not already placed in current row,
       current column and current 3x3 box */
    return (!UsedInRow(grid, row, num,N) &&
           !UsedInCol(grid, col, num,N));
}

/* A utility function to print grid  */
void printGrid(int grid[][410],int N)
{
    for (int row = 0; row < N; row++)
    {
       for (int col = 0; col < N; col++)
             printf("%d ", grid[row][col]);
        printf("\n");
    }
}

/* Driver Program to test above functions */
int main()
{
    int tc,k,K;
    cin>>tc;

    while(tc--){
    cin>>k;
    N=k;
    K=k;
    int grid[410][410];
    // 0 means unassigned cells
    memset(grid, 0, sizeof(grid[0][0]) * k * k);
    int p=(N)/2;
       // cout<<"val"<<" "<<k<<" "<<N<<" "<<p<<endl;

    grid[p][p]=k;
             // printGrid(grid,N);

    if (SolveSudoku(grid,N) == true)
          printGrid(grid,N);

    }
    return 0;
}
