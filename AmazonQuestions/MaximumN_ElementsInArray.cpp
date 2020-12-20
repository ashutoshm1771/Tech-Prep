// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

void printKMax(vector<int>& v,int k)
{
    int n=v.size();
    vector<int> heap(2*v.size()+1,0);
    for(int i=n;i<heap.size();i++)
        heap[i]=v[n-i-1];
    for(int i=0;i<heap.size();i++)
        cout<<heap[i]<<" ";
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    printKMax(v,k);
    return 0;
}
