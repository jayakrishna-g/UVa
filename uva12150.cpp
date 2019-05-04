#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        int n=t;
        int *a=new int[n];
        memset(a,0,sizeof(a));
        int flag=0;
        int i;
        for(i=0;i<n;i++)
        {
            int cn,rp,op;
            scanf("%d%d",&cn,&rp);
            op=i+rp;
            if(flag||op>=n||op<0||a[op]!=0)
            flag=1;
            else
            a[op]=cn;
        }
        if(!flag)
        {
            cout<<a[0];
            for(int i=1;i<n;i++)
            cout<<" "<<a[i];
        }
        else
        {
            cout<<-1;
        }
        
        cout<<endl;
        scanf("%d",&t);
    }
}