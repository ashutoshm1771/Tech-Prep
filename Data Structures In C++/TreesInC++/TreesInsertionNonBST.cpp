#include<bits/stdc++.h>

using namespace std;
struct Node{
	int data;
	struct Node *left,*right;
	Node(int data)
	{
		this->data=data;
		left=right=NULL;
	}
};
typedef struct Node* tptr;

void inorder(tptr root)
{
	if(root==NULL)return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
/*
		1
	   / \ 
	  2  3 
	 /\  /\
	N  67  8       1 2 3 N 6 7 8 
*/

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	root=ins(n);
	return 0;
}
