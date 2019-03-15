#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int w;
    int t=1;
    while(scanf("%d",&n)&&n)
    {
        int c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            cin>>w;
            if(w==0)
            c1++;
            else
            c2++;
        }
        cout<<"Case "<<(t++)<<": "<<(c2-c1)<<endl;
    }
}