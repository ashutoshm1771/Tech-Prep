// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

bool isMatch(string text,string pattern)
{
    vector<vector<bool>> t(text.size()+1,vector<bool>(pattern.size()+1));
    t[0][0]=true;
    // deals with empty strings like a* or a*b*
    for(int i=1;text[i];i++)
    {
        if(pattern[i-1]=='*')
        {
            t[0][i]=t[0][i-2];
        }
    }
    for(int i=1;i<text.size();i++)
    {
        for(int j=1;j<pattern.size();j++)
        {
            if(text[i-1]==pattern[j-1] || pattern[j-1]=='.'){
                t[i][j]=t[i-1][j-1];
            }else if(pattern[j-1]=='*'){
                t[i][j]=t[i][j-2];
                if( pattern[j-2]=='.' || pattern[j-2]==text[i-1]){
                    t[i][j]=t[i][j]|t[i-1][j];
                }
            }
            else t[i][j]=false;
        }

    }
    return t[text.size()][pattern.size()];

}
int main()
{
    string text,pattern;
    cin>>text>>pattern;
    isMatch(text,pattern) ? cout<<"Match" : cout<<"No Match";
    return 0; 
}
