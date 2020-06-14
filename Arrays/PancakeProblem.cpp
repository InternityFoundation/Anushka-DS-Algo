#include<bits/stdc++.h>  
using namespace std;  

int ceilSearch(int arr[], int l, int h, int x)  
{  
    int m;  

    if(x <= arr[l])  
        return l;  
    if(x > arr[h])  
        return -1; 
    m = (l + h)/2;
    if(arr[m] == x)  
        return m;  
    if(arr[m] < x)  
    {  
        if(m + 1 <= h && x <= arr[m+1])  
            return m + 1;  
        else
            return ceilSearch(arr, m+1, h, x);  
    }  
    if (m - 1 >= l && x > arr[m-1])  
        return m;  
    else
        return ceilSearch(arr, l, m - 1, x);  
}  

void flip(int arr[], int i)  
{  
    int temp, start = 0;  
    while (start < i)  
    {  
        temp = arr[start];  
        arr[start] = arr[i];  
        arr[i] = temp;  
        start++;  
        i--;  
    }  
}  

void insertionSort(int arr[], int n)  
{  
    int i, j;  
  
    for(i = 1; i < n; i++)  
    {  
        int j = ceilSearch(arr, 0, i-1, arr[i]);  
        if (j != -1)  
        { 
            flip(arr, j-1);  
            flip(arr, i-1);  
            flip(arr, i);  
            flip(arr, j);  
        }  
    }  
}  

void pancakeProb(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; ++i)  
        cout<<arr[i]<<" ";  
}  

int main()  
{  int n;
    cin>>n;
    
    int a[n];
    for(int i =0; i< n; i++)
    {
        cin>>a[i];
    }
    insertionSort(a,n);
    pancakeProb(a,n);
    return 0;
}  
