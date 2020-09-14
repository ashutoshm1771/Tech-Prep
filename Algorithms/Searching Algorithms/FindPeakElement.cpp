#include<bits/stdc++.h>
using namespace std;

int findPeakUtil(vector<int> v,int low,int high)
{
    int n=v.size();
    if(low<=high){
        int mid=(high+low)/2;
        if((mid==0 || v[mid-1]<v[mid]) && (mid==n-1 || v[mid+1]<v[mid]))
            return mid;
        else if(mid>0 && v[mid-1] > v[mid])
            return findPeakUtil(v,0,mid-1);
        else return findPeakUtil(v,mid+1,high);
    }
    return -1;
}
int findPeak(vector<int> v)
{
    return findPeakUtil(v,0,v.size()-1);
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int f=findPeak(v);
    (f==-1) ? cout<<"No Peak" : cout<<"Peak is at "<<f;
    return 0;
}