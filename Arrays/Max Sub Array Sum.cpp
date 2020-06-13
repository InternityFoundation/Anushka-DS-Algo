#include<bits/stdc++.h>
using namespace std;

int maxSumSubArray(int a[], int size) 
{ 
    int max1 = INT_MIN, max2 = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max2 = max2 + a[i]; 
        if (max1 < max2) 
            max1 = max2; 
  
        if (max2 < 0) 
            max2 = 0; 
    } 
    return max1; 
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
    cout<<maxSumSubArray(a,n);

    return 0;
}