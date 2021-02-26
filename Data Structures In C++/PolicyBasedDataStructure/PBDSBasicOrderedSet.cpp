// Author : Ashutosh Mishra

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

int main()
{
    ordered_set oSet;
    int n;
    cin>>n;
    while(n!=-1)
    {
        oSet.insert(n);
        cin>>n;
    }

    cout<<*(oSet.find_by_order(0))<<endl; // 1st samllest element
    cout<<*(oSet.find_by_order(1))<<endl; // 2nd smallest element
    cout<<*(oSet.find_by_order(2))<<endl; // 3rd smallest element
    cout<<oSet.order_of_key(4)<<endl; // Number of elements strictly less than 4
    if(oSet.find(2)!=oSet.end()) // Find 2
        oSet.erase(oSet.find(2)); // Erase 2
    for(auto x: oSet)
        cout<<x<<" "; // Print elements 
    return 0;
}
