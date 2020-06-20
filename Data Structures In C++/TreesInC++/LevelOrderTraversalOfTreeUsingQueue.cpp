#include<iostream>
#include<queue>
#include<cstdlib>
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
tptr newNode(int data)
{
	tptr p=(struct Node*)malloc(sizeof(struct Node));
	p->data=data;
	p->left = p->right = NULL;
	return p;
}
tptr bstInsert(tptr root,int data)
{
	if(root==NULL)return newNode(data);
	if( data < root->data ) root->left = bstInsert(root->left,data);
	else if(data > root->data )root->right = bstInsert(root->right,data);
	else return root;
}
void calcSize(tptr root)
{
	if(root==NULL)return ;
	int c=1;
	queue<tptr> q;
	q.push(root);
	while(!q.empty())
	{
		tptr temp=q.front();
		if(temp->left){
			q.push(temp->left);
			c++;
		}
		if(temp->right)
		{
			q.push(temp->right);
			c++;
		}
		q.pop();
	}
	cout<<c<<endl;
}
void levelPrint(tptr root)
{
	queue<tptr> q;
	tptr curr;
	if(root==NULL) return ;
	q.push(root);
	q.push(NULL);
	while(q.size() > 1)
	{
		curr=q.front();
		q.pop();
		if(curr==NULL)
		{
			q.push(NULL);
			cout<<endl;
		}
		else{
			if(curr->left)q.push(curr->left);
			if(curr->right)q.push(curr->right);
			cout<<curr->data<<" ";
		}
		//q.pop();
	}
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
	calcSize(root);
	levelPrint(root);
	return 0;
}
