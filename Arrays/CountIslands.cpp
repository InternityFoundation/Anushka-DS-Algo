#include <bits/stdc++.h> 
using namespace std; 
  
#define ROW 5 
#define COL 5  
int isSafe(int M[][COL], int r, int c, bool visited[][COL]) 
{
    return (r >= 0) && (r < ROW) && (c >= 0) && (c < COL) && (M[r][c] && !visited[r][c]); 
} 
void DFS(int M[][COL], int row, int col, 
         bool visited[][COL]) 
{ 
    static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
    static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; 
      visited[row][col] = true; 
 
    for (int k = 0; k < 8; ++k) 
        if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited)) 
            DFS(M, row + rowNbr[k], col + colNbr[k], visited); 
} 

int islandsCount(int M[ROW][COL]) 
{
    bool visited[ROW][COL]; 
    memset(visited, 0, sizeof(visited)); 
    int count = 0; 
    for (int i = 0; i < ROW; ++i) 
        for (int j = 0; j < COL; ++j) 

            if (M[i][j] && !visited[i][j]) { 

                DFS(M, i, j, visited); 
                ++count; 
            } 
  
    return count; 
} 

int main() 
{ 
    int M[ROW][COL];
    for(int i= 0 ; i< ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            cin>>M[i][j];
        }
    } 
  
    cout << "Number of islands is: " << islandsCount(M); 
  
    return 0; 
} 