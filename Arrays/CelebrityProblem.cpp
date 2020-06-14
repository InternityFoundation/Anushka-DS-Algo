#include <bits/stdc++.h> 
using namespace std; 
#define N 8 

bool MATRIX[N][N] = {{0, 0, 1, 0}, 
                    {0, 0, 1, 0}, 
                    {0, 0, 0, 0}, 
                    {0, 0, 1, 0}}; 
   
bool known(int a, int b) 
{ 
    return MATRIX[a][b]; 
} 
int findCelebrity(int n) 
{   
    int incount[n]={0},outcount[n]={0};  
    for(int i=0; i<n; i++) 
    { 
        for(int j=0; j<n; j++) 
        { 
            int x = known(i,j); 

            outcount[i]+=x; 
            incount[j]+=x; 
        } 
    } 

    for(int i=0; i<n; i++) 
    if(incount[i] == n-1 && outcount[i] == 0) 
        return i; 
      
    return -1; 
} 
int main() 
{ 
    int n;
    cin>>n; 
    int a = findCelebrity(n); 
    if(a == -1)
        cout << "No celebrity";
    else 
        cout << "Celebrity ID " << a; 
    return 0; 
} 