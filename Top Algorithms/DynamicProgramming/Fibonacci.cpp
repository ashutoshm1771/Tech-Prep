// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

int fiboExtraSpace(int n)
{
 vector<int> f(n+1,0);
 f[0]=f[1]=1;
 for(int i=2;i<=n;i++)
 {
  f[i]=f[i-1]+f[i-2];
 }
 return f[n];
}

int fiboNoExtraSpace(int n)
{
 int cur=1,ff=1,sf=1;
 if(n<2)return 1;
 for(int i=2;i<=n;i++)
 {
  cur=ff+sf;
  sf=ff;
  ff=cur;
 }
 return cur;
}
int main()
{
 int n;
 cin>>n;
 cout<<fiboExtraSpace(n)<<endl;
 cout<<fiboNoExtraSpace(n)<<endl;
 return 0;
}
