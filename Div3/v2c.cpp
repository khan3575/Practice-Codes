#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n];
    ll b[m];
    ll sum=0;
    ll range[n+10]={0};
    range[0]=0;
    for(ll i=0; i<n; i++)
    {
        ll x;
            cin>>x;
            range[i+1]=range[i]+x;
    }
    for(ll i=0; i<m;i++)
    {
        cin>>b[i];
    }
    ll i,j;
    sort(b,b+m);
    j=0;
    for(i=0; i<m; i++)
    {
            if(b[i]<=range[j])
            {
                cout<<j<<" "<<(b[i]-range[j-1])<<endl;
            }
            else {
                cout<<j+1<<" "<<(b[i]-range[j])<<endl;
                j++;
            }
    }
return 0;
}
