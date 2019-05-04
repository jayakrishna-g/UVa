#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,x,y,mx,my;
    cin>>k;
    do
    {
        cin>>mx>>my;
        while(k--){
            cin>>x>>y;
            if(x==mx||y==my)
            {
                cout<<"divisa"<<endl;
            }
            else if(x>mx&&y>my)
            {
                cout<<"NE"<<endl;
            }
            else if(x<mx&&y>my)
            {
                cout<<"NO"<<endl;
            }
            else if(x<mx&&y<my)
            {
                cout<<"SO"<<endl;
            }
            else
            {
                cout<<"SE"<<endl;
            }
            
        }
        cin>>k;
    } while (k!=0);
    
}