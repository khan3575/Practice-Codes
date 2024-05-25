#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[102]={0};
    set<int> s;
    for(int i=1; i<=n; i++)
    {
        
        int x;
        cin>>x;
        s.insert(x);
        a[x]=i;
    }
    if(s.size()<k)
    {
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    for(int i=1; i<=100; i++)
    {
        if(a[i])
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    }
return 0;

}