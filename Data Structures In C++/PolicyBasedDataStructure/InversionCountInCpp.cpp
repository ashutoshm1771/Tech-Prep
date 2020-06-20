#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
int invCountPBDS(vector<int> v)
{
    ordered_set oset;
    oset.insert(v[0]);
    int invCount=0,key;
    for(int i=1;i<v.size();i++)
    {
        oset.insert(v[i]);
        key=oset.order_of_key(v[i]+1);
        invCount+=oset.size()-key;
    }       
    return invCount;
}
int main()
{
    int n;
    cin>>n;
    int ip;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>ip;
        v.push_back(ip);
    }
    cout<<invCountPBDS(v)<<endl;
    // cout<<invCountSetSTL(v)<<endl;
    // cout<<invCountMergeSTL(v)<<endl;
    return 0;
}