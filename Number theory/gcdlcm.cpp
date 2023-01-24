#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        ll lc,gc;
        cin>>x>>y;
        gc= __gcd(x,y);
        lc=(x*y)/gc;
        cout<<gc<< " "<<lc<<endl;
    }
    return 0;
}