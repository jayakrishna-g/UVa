#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,lo,hi,n,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lo=10000;
        hi=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            lo=min(a,lo);
            hi=max(a,hi);
        }
        cout<<2*(hi-lo)<<endl;
    }
}