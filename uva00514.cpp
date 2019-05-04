#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(scanf("%d",&t),t){
        //printf("%d\n",t);
        while(1)
        {
            int *a=new int[t];
            cin>>a[0];
            //cout<<a[0];
            if(a[0]==0)
            break;
            for(int i=1;i<t;i++)
            cin>>a[i];
            stack<int> s;
            int orq=1;
            s.push(orq);
            orq++;
            int i;
            for(i=0;i<t;)
            {
                if(!s.empty())
                {
                    if(s.top()==a[i])
                    {
                        s.pop();
                        i++;
                    }
                    else if(a[i]<s.top())
                    {
                        cout<<"No"<<endl;
                        break;
                    }
                    else
                    {
                        s.push(orq);
                        orq++;
                    }
                }
                else
                {
                    s.push(orq);
                    orq++;
                }
            }
            if(i==t)
            {
                cout<<"Yes"<<endl;
            }
        }
        cout<<endl;
    }
    
}