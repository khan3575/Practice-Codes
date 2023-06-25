#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool even = true;
        int a[n];
        for(int i=0; i<n;i++)
        {
            cin>>a[i];
            even&= (a[i]%2==0);
        }
        if(even)
        {
            cout<<"YES\n";
            continue;
        }
        sort(a,a+n);
            if(a[0]&1)
            {
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        

    }
    return 0;
}