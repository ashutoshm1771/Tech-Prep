// Author : Ashutosh Mishra
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    //for(auto x: v){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<n+1;
    return 0;
}
