#include<bits/stdc++.h>
using namespace std;
string foo(string s)
{
    if(s=="HELLO")return "ENGLISH";
    if(s=="HOLA")return "SPANISH";
    if(s=="HALLO")return "GERMAN";
    if(s=="BONJOUR")return "FRENCH";
    if(s=="ZDRAVSTVUJTE")return "RUSSIAN";
    if(s=="CIAO")return "ITALIAN";
    return "UNKNOWN";
}
int main()
{
    string s;
    cin>>s;
    int i=1;
    while(s!="#")
    {
        cout<<"Case "<<i++<<": "<<foo(s)<<endl;
        cin>>s;
    }
}