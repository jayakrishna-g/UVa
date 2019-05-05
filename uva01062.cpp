#include<bits/stdc++.h>
using namespace std;
int a[26];
int foo(string s)
{
    for(int i=0;i<26;i++)
    a[i]=27;
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<26;j++)
        {
            if(a[j]>=s[i]-'A')
            {
                a[j]=s[i]-'A';
                break;
            }
        }
    }
    int ret=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]!=27)
        ret++;
    }
    return ret;
}
int main()
{
    string s;
    int cou=1;
    cin>>s;
    while(s!="end")
    {
        //memset(a,0,sizeof(a));
        cout<<"Case "<<(cou++)<<":"<<" "<<foo(s)<<endl;
        cin>>s;
    }
}