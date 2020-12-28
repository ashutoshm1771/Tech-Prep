// Author : Ashutosh Mishra

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

int sTree(tptr root)
{
 if(root)
 {
  int old_val = root->data;
  root->data = sTree(root->left) + sTree(root->right);
  return root->data + old_val;
 }
 return 0;
}

void inorder(tptr root)
{
 if(root)
 {
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
 }
}

int main()
{
 tptr root = new TNode(10);
 root->left = new TNode(-2);
 root->right = new TNode(6);
 root->left->left = new TNode(8);
 root->left->right = new TNode(-4);
 root->right->right = new TNode(5);
 root->right->left = new TNode(7);
 sTree(root);
 inorder(root);
 return 0;
}
