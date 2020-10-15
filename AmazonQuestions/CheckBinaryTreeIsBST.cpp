#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left,*right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
typedef struct Node* tptr;
bool isBSTUtil(tptr root,int min,int max)
{
    if(root==NULL)return true;
    if(root->data < min || root->data > max)return false;
    return ( (isBSTUtil(root->left,min,root->data-1) ) && ( isBSTUtil(root->right,root->data+1,max) ) );
}
bool isBST(tptr root)
{
    return isBSTUtil(root,INT_MIN,INT_MAX);
}
bool isBSTUsingInorder(tptr root)
{
    static tptr prev=NULL;
    if(root!=NULL)
    {
        if(!isBSTUsingInorder(root->left))return false;
        if(prev!=NULL && root->data < prev->data) return false;
        prev=root;
        return isBSTUsingInorder(root->right);
    }
    else return true;
    //return true;
}
int main()
{
    tptr root=new Node(3);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    //root->left->right=new Node(4);
    (isBST(root)) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    (isBSTUsingInorder(root)) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    return 0;
}
/*
        3
       /  \
      2    5 
     / \
    1   4
*/