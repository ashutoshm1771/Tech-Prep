#include<iostream>
#include<queue>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	struct Node* left,*right;
	Node(int data)
	{
		this->data=data;
		left=right=NULL;
	}
};
typedef struct Node* tptr;
tptr bstInsert(tptr root,int data)
{
	if(root==NULL)return new Node(data);
	if( data < root->data ) root->left= bstInsert(root->left,data);
	else if(data > root->data ) root->right = bstInsert(root->right,data);
	else return root;
}
void leftView(tptr root)
{
	if(root==NULL) return ;
	tptr temp;
	queue<tptr> q;
	q.push(root);
	q.push(NULL);
	bool fl=true;
	while(q.size() > 1)
	{
		temp=q.front();
		q.pop();
		if(temp==NULL){
			fl=true;
			q.push(NULL);
		}
		else{
		if(temp->left)  q.push(temp->left);
		if(temp->right) q.push(temp->right);
		if(fl){
			fl=false;
			cout<<temp->data<<" ";
		}
		}
	}
	puts("");
}
int main()
{
	int n;
	cin>>n;
	tptr root=NULL;
	while(n!=-1)
	{
		root=bstInsert(root,n);
		cin>>n;
	}
	leftView(root);
	return 0;
}
