// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

bool isSame(int n)
{
    int numDig=floor(log10(n))+1,last=n%10;
    while(numDig>1){
        n/=10;
        numDig--;
    }
    return (n==last) ? true : false; 
}

int main()
{
    int l,r,c=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        if(isSame(i)){
            cout<<i<<" ";
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
    
}
