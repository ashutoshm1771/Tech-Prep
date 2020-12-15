#include<bits/stdc++.h>
using namespace std;

struct TNode{
 int data;
 struct TNode *left,*right;
 TNode(int data)
 {
  this->data = data;
  left = right = NULL;
 }
};
typedef struct TNode* tptr;

tptr newNode(int data)
{
 tptr temp = new TNode(data);
 //temp->data= data;
 //temp->left = temp->right = NULL;
 return temp;
}

tptr findLCAUtil(tptr root,int n1,int n2,bool& v1,bool& v2)
{
 if(root==NULL) return root;
 if(root->data == n1)
 {
  v1 = true;
  return root;
 }
 if(root->data == n2)
 {
  v2 = true;
  return root;
 }
 tptr leftLca = findLCAUtil(root->left,n1,n2,v1,v2);
 tptr rightLca = findLCAUtil(root->right,n1,n2,v1,v2);
 if(leftLca && rightLca)
  return root;
 return (leftLca) ? leftLca : rightLca;
}
bool find(tptr root,int n)
{
 if(root==NULL) 
  return false;
 if(root->data == n || find(root->left,n) || find(root->right,n) )
  return true;
 return false;
}
tptr findLCA(tptr root,int n1,int n2)
{
 bool v1 = false , v2 = false;
 tptr lca = findLCAUtil(root,n1,n2,v1,v2);
 if( v1 && v2 || v1 && find(root,n2) || v2 && find(root,n1) )
  return lca;
 return NULL;
}

int main()
{
 tptr root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->right->left = newNode(6); 
    root->right->right = newNode(7); 
    tptr lca = findLCA(root,4,5);
 (lca) ? cout<<lca->data<<" " : cout<<"Not found"<<endl;
 lca = findLCA(root,4,10);
 (lca) ? cout<<lca->data<<" " : cout<<"Not found"<<endl;
 return 0;
}