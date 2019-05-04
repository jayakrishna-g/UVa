#include<bits/stdc++.h>
using namespace std;
long clockwise(long a,long b)
{
    if(a>b)
    return 360-abs(b-a)*9;
    else
    {
        return (b-a)*9;
    }
    
}
long counter(long a,long b)
{
    if(a<b)
    return 360-abs(a-b)*9;
    else
    {
        return (a-b)*9;
    }
}
int main()
{
    long ip,s1,s2,s3;
    while(scanf("%ld%ld%ld%ld",&ip,&s1,&s2,&s3)&&(ip||s1||s2||s3))
    {
        long ans=0;
        ans+=720;
        ans+=counter(ip,s1);
        ans+=360;
        ans+=clockwise(s1,s2);
        ans+=counter(s2,s3);
        printf("%ld\n",ans);
    }
}