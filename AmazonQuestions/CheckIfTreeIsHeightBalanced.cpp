// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

struct TNode
{
 int data;
 struct TNode *left,*right;
 TNode(int data)
 {
  this->data = data;
  left = right = NULL;
 }
};
typedef struct TNode* tptr;

int height(tptr root)
{
 if(root)
 {
  return 1 + max(height(root->left) , height(root->right));
 }
 return 0;
}

bool isHBalanced(tptr root)
{
 if(root)
 {
  int lh = height(root->left) , rh = height(root->right);
  if( abs(lh-rh) <= 1 && isHBalanced(root->left) && isHBalanced(root->right))
   return true;
  return false;
 }
 return true;
}

int main()
{
 tptr root = new TNode(1);
 root->left = new TNode(2);
 root->right = new TNode(3);
 root->left->left = new TNode(4);
 root->left->left = new TNode(5);
 isHBalanced(root) ? cout<<"Balanced" : cout<<"Not Balanced";
 return 0;
}
