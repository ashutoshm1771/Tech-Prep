#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
//#define fo4(x,oSet) for(auto x: oSet)
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node__update>

int main()
{
    int n;
    cin>>n;
    ordered_set oSet;
    while(n!=-1)
    {
        oSet.insert(n);
        cin>>n;
    }
    for(auto x: oSet)
    {
        cout<<x<<" ";
    }
    int st,en;
    cin>>st>>en;
    cout<<oSet.order_of_key(en+1)-oSet.order_of_key(st)<<endl;
    return 0;
}