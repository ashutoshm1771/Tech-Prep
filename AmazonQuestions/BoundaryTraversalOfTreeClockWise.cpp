// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

struct TNode
{
 int data;
 struct TNode* left,*right;
 TNode(int data)
 {
  this->data = data;
  left = right = NULL;
 }
};

typedef struct TNode* tptr;

void printBoundaryRight(tptr root)
{
 if(root)
 {
  if(root->right)
  {
   cout<<root->data<<" ";
   printBoundaryRight(root->right);
  }
  else if(root->left)
  {
   cout<<root->data<<" ";
   printBoundaryRight(root->left);
  }
 }
}

void printLeaves(tptr root)
{
 if(root)
 {
  printLeaves(root->right);
  if(root->left == NULL && root->right == NULL) // Leaf Condition
   cout<<root->data<<" ";
  printLeaves(root->left);
 }
}

void printBoundaryLeft(tptr root)
{
 if(root)
 {
  if(root->left)
  {
   printBoundaryLeft(root->left);
   cout<<root->data<<" ";
  }
  else if(root->right)
  {
   printBoundaryLeft(root->right);
   cout<<root->data<<" ";
  }
 }
}

void printBoundaryClockwise(tptr root)
{
 if(root)
 {
  cout<<root->data<<" ";
  
  // Right Boundary
  printBoundaryRight(root->right);

  // Leaves
  printLeaves(root->right);
  printLeaves(root->left);

  // Left Boundary
  printBoundaryLeft(root->left);
 }
}

int main()
{
 tptr root = new TNode(1);
 root->left = new TNode(2);
 root->right = new TNode(3);
 root->left->left = new TNode(4);
 root->left->right = new TNode(5);
 printBoundaryClockwise(root); // 1 3 5 4 2
 return 0;

}
