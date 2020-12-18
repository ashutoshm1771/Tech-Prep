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

void inorder(tptr root,vector<int> v)
{
 if(root)
 {
  inorder(root->left,v);
  v.push_back(root->data);
  inorder(root->right,v);
 }
}

bool checkMirror(tptr root1,tptr root2)
{
 if(root1 == NULL && root2 == NULL) return true;
 if(root1 == NULL || root2 == NULL) return false;
 vector<int> i1,i2;
 inorder(root1,i1);
 inorder(root2,i2);
 if(i1.size() != i2.size()) return false;
 for(int i=0,j=i2.size()-1;i<=j;i++,j--)
  if(i1[i] != i2[j]) return false;
 return true;
}

int main()
{
 tptr root1 = new TNode(1) , root2 = new TNode(1);
 root1->left = new TNode(2); root2->right = new TNode(2);
 root1->left->left = new TNode(3); root2->right->right = new TNode(3);
 root1->left->right = new TNode(4); root2->right->left = new TNode(4);
 checkMirror(root1,root2) ? cout<<"Mirrors" : cout<<"Not Mirrors";
 return 0;
}
