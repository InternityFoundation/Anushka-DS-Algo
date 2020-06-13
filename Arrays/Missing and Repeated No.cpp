#include <bits/stdc++.h> 
using namespace std; 
  
void repeatingMissing(int arr[], int num) 
{   cout<<"Repeating element is ";
    for (int i = 0; i < num; i++) { 
        if (arr[abs(arr[i]) - 1] > 0) 
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1]; 
        else
            cout << abs(arr[i]) << "\n"; 
    } 
  
    cout << "and the missing element is "; 
    for (int i = 0; i < num; i++) { 
        if (arr[i] > 0) 
            cout << (i + 1); 
    } 
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
    repeatingMissing(a,n);

    return 0;
}