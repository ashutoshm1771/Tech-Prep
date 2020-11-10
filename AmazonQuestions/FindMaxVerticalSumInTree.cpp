// Ashutosh Mishra

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
map<int,int> m;
void processHashTable(tptr root,int hd)
{
    if(root!=NULL){
        m[hd]+=root->data;
        processHashTable(root->left,hd-1);
        processHashTable(root->right,hd+1);
    }
}
int maxVerticalSum(tptr root)
{
    processHashTable(root,0);
    int ans=0;
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
        ans=max(ans,it->second);
    }
    return ans;
}
int main()
{
    tptr root=new Node(1);
    root->left=new Node(2);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right=new Node(3);
    root->right->left=new Node(7);
    root->right->right=new Node(6);
    cout<<maxVerticalSum(root)<<endl;
    return 0;
}
