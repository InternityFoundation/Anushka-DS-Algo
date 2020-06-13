#include<bits/stdc++.h>
using namespace std;

bool pairWithDiff(int arr[], int size, int n)  
{ 
    int i = 0;  
    int j = 1;  
  
    while (i < size && j < size)  
    {  
        if (i != j && arr[j] - arr[i] == n)  
        {  
            cout << "Pair Found: (" << arr[i] << 
                        ", " << arr[j] << ")";  
            return true;  
        }  
        else if (arr[j]-arr[i] < n)  
            j++;  
        else
            i++;  
    }  
  
    cout << "No such pair";  
    return false;  
} 

int main()
{
    int n;
    cin>>n;
    
    int a[n];
    for(int i =0; i< n; i++)
    {
        cin>>a[i];
    }
    int num;
    cin>>num;
    pairWithDiff(a,n,num);
    return 0;
}