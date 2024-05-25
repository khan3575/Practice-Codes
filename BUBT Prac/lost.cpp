#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,s;
    cin>>n>>s;
        int x;
        for(int i=0; i<n;i++)
        {
            cin>>x;
            s+=x;
        }
    int t=0;
    for(int i=1; t<s; t++)
    {
        t+=i;
    }
    if(t==s)
    {
        cout<<"YES\n";
    }
    else cout<<"NO\n";
    }
}