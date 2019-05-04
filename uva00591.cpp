#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(n)
    {
        int *a=new int[n];
        long long tot=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            tot+=a[i];
        }
        int avg=tot/n;
        long eb=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>avg)
            {
                eb+=a[i]-avg;
            }
        }
        cout<<"Set #"<<(i++)<<endl;
        cout<<"The minimum number of moves is "<<eb<<"."<<endl;
        cin>>n;
        cout<<endl;
    }
}