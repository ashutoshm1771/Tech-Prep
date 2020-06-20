#include<iostream>
#include<vector>
#define endl '\n';
using namespace std;
int countSub(vector<int> v)
{
    int ans=0,n=v.size(),temp,i,j;
    bool fl=false;
    for(i=0;i<n-1;)
    {
        fl=false;
        for(j=i+1;j<n;j++)
            if(v[j]<=v[i])
            {
                fl=true;
                break;
            }
        if(fl){
            temp=j-i+1;
            ans+=((temp-1)*temp)/2;
            i=j+1;
        }
        else{
            temp=j-i+1;
            return ans+((temp-1)*temp)/2;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<countSub(v)<<endl;
    return 0;
}
// 2 --> 1 , 3 --> 3 , 4 --> 6 , 5 -->
// 1 2 3 4 5
/*
    n-> n(n+1)/2
    n-1-> n(n-1)/2
*/