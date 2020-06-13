#include<bits/stdc++.h>
using namespace std;

void moveZeros(int arr[], int n) 
{ 
    int count = 0;
\
    for (int i = 0; i < n; i++) 
        if (arr[i] != 0) 
            arr[count++] = arr[i];
 
    while (count < n) 
        arr[count++] = 0; 
} 



int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    moveZeros(a,n);
    for (int i = 0; i < n; i++) 
        cout << a[i] << " "; 

    return 0;
}