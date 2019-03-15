#include<bits/stdc++.h>
using namespace std;
long foo(long n)
{
    long ans=0;
    ans=n*567;
    ans/=9;
    ans+=7492;
    ans*=235;
    ans/=47;
    ans-=498;
    return ((ans%100)/10);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        cout<<abs(foo(n))<<endl;
    }
}