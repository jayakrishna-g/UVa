#include<bits/stdc++.h>
using namespace std;
typedef struct p
{
    int a,b;
}ds;
ds a[20];
double dist[20][20];
double dp[20];
int t;
double dis(ds p1,ds p2)
{
  // cout<<p1.a<<" "<<p1.b<<","<<p2.a<<" "<<p2.b<<","<<sqrt(pow(p1.a-p2.a,2)+pow(p1.b-p2.b,2))<<endl;
    return sqrt((p1.a-p2.a)*(p1.a-p2.a)+(p1.b-p2.b)*(p1.b-p2.b));
}
double foo(bool vis[],int vi)
{
    //cout<<vi<<endl;
    if(vi>=2*t)
    return 0;
    int i;
    double ret=1000000;
    if(vis[vi])
    {
        vi=0;
        while(vis[vi])vi++;
    }
    if(vi>=2*t)
    return 0;
    vis[vi]=true;
    for(i=vi+1;i<2*t;i++)
    if(!vis[i])
    {
        vis[i]=true;
        ret=min(ret,dis(a[vi],a[i])+foo(vis,i));
        //cout<<"ret:"<<ret<<endl;
        vis[i]=false;
    }
    vis[vi]=false;
    return ret;
}
int main()
{
   // int t;
    char s[30];
    //ds a[20];
    cin>>t;
    int x=1;
    while(t!=0)
    {
        for(int i=0;i<2*t;i++)
        dp[i]=-1;
        for(int i=0;i<2*t;i++)
        {
            cin>>s;
            cin>>a[i].a>>a[i].b;
        }
        bool vis[2*t];
        for(int i=0;i<2*t;i++)
        vis[i]=false;
        double ans=foo(vis,0);
        printf("Case %d: %.2f\n",x,ans);
        x++;
        cin>>t;
    }
}