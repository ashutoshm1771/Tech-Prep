// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

class Node{
 public:
 int data;
 Node* next;
 Node(int data)
 {
  this->data=data;
  next=NULL;
 }
};
typedef Node* node;
void pushFront(node* head,int newData)
{
 node newHead=new Node(newData);
 newHead->next=(*head);
 (*head)=newHead;
}

void printList(node head)
{
 node temp=head;
 while(temp!=NULL)
 {
  cout<<temp->data<<" ";
  temp=temp->next;
 }
}
int main()
{
 int n,ip;
 cin>>n;
 node head=NULL;
 while(n--)
 {
   cin>>ip;
   pushFront(&head,ip);
 }
 printList(head);
}
