#include <bits/stdc++.h> 
using namespace std; 
#define ROW 4  
#define COL 5  

void printUniqueRows(int M[ROW][COL]) 
{ 
    for(int i=0; i<ROW; i++) 
    { 
        int x=0; 

        for(int j=0; j<i; j++) 
        { 
            x=1; 
              
            for(int k=0; k<=COL; k++) 
            if(M[i][k]!=M[j][k]) 
                x=0; 
              
            if(x==1) 
            break; 
        } 
        if(x==0) 
        { 
            for(int j=0; j<COL; j++) 
                cout<<M[i][j]<<" "; 
            cout<<endl; 
        } 
    } 
} 
int main()
{ 
int a[ROW][COL]; 
for(int i=0;i<ROW;i++)
{
    for(int j=0;j<COL;j++)
    {
        cin>>a[i][j];
    }
}
printUniqueRows(a);  
return 0;  
}  