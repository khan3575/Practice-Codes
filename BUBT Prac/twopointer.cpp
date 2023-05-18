#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,s;
    cin>>n>>s;
    ll a[n];
    for(int i=0; i<n;i++)
        cin>>a[i];
    ll x=0,res=0,l=0,r;
    for(r=0; r<n; r++)
    {
        x+=a[r];
        while(x-a[l]>=s)
        {
            x-=a[l];
            l++;
        }
        if(x>=s)
        {
            res+= n-(r-l+1);
            //cout<<res<< " ";
        }
    }
    if(res==0)
    {
        cout<<-1<<endl;
    }
    else
    cout<<res<<endl;
    return 0;
}