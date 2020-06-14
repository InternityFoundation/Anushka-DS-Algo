#include<bits/stdc++.h>  
  
using namespace std; 

class node  
{  
    public: 
    int data;  
    node* left;  
    node* right;  

    node(int data) 
    { 
        this->data = data; 
        this->left = NULL; 
        this->right = NULL; 
    } 
};  
  
void printKDistant(node *root , int k)  
{  
    if(root == NULL)  
        return;  
    if( k == 0 )  
    {  
        cout << root->data << " ";  
        return ;  
    }  
    else
    {  
        printKDistant( root->left, k - 1 ) ;  
        printKDistant( root->right, k - 1 ) ;  
    }  
}  