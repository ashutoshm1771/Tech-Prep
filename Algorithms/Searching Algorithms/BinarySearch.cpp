// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

int iterBinSearch(vector<int> v,int low,int high,int x)
{
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(v[mid]==x)return mid;
        else if(v[mid]<x) low=mid+1;
        else high=mid-1;
    }
    return -1;
}

int recBinSearch(vector<int> v,int low,int high,int x)
{
    if(low<=high)
    {
        int mid=(high+low)/2;
        if(v[mid]==x)return mid;
        else if(v[mid]<x)return recBinSearch(v,mid+1,high,x);
        else return recBinSearch(v,low,mid-1,x);
    }
    return -1;
}

int binSearch(vector<int> v,int x)
{
    int f=iterBinSearch(v,0,v.size()-1,x);
    if(f==recBinSearch(v,0,v.size()-1,x))
        return f;
    else return -1;
}

int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)
       cin>>v[i];
    int f=binSearch(v,x);
    (f==-1) ? cout<<"Not Found" : cout<<"Found at "<<f;
    return 0;     
}
