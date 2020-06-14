#include <bits/stdc++.h> 
using namespace std; 
#define UNASSIGNED 0 
#define N 9 
bool isSafe(int grid[N][N]) 
{
    unordered_map<int, int> 
        row_[9], column_[9], box[3][3]; 
    for (int row = 0; row < N; row++) { 
        for (int col = 0; col < N; col++) { 
            row_[row][grid[row][col]] += 1; 
            column_[col][grid[row][col]] += 1; 
            box[row / 3][col / 3][grid[row][col]] += 1; 
            if ( 
                box[row / 3][col / 3][grid[row][col]] > 1 
                || column_[col][grid[row][col]] > 1 
                || row_[row][grid[row][col]] > 1) 
                return false; 
        } 
    } 
    return true; 
} 

void printGrid(int grid[N][N]) 
{ 
    for (int row = 0; row < N; row++) { 
        for (int col = 0; col < N; col++) 
            cout << grid[row][col] << " "; 
        cout << endl; 
    } 
} 

bool SolveSudoku( 
    int grid[N][N], int i, int j) 
{
    if (i == N - 1 && j == N) { 
        if (isSafe(grid)) { 
            printGrid(grid); 
            return true; 
        } 
        return false; 
    } 

    if (j == N) { 
        i++; 
        j = 0; 
    } 
    if (grid[i][j] != UNASSIGNED) 
        return SolveSudoku(grid, i, j + 1); 
    for (int num = 1; num <= 9; num++) {  
        grid[i][j] = num; 
  
        if (SolveSudoku(grid, i, j + 1)) 
            return true; 
  
        grid[i][j] = 0; 
    } 
    return false; 
} 
 
int main() 
{
    int grid[N][N];
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;i++)
        {
            cin>>grid[i][j];
        }
    }
    if (SolveSudoku(grid, 0, 0) != true) 
        cout << "No solution exists"; 
  
    return 0; 
} 
  