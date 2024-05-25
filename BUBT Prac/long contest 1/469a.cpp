#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n;
        cin>>p;
        bool a[n+5]={false};
        set<int> s;
        int x;
        for(int i=1; i<=p; i++)
        {
            cin>>x;
            a[x]=true;
        }
        for(int i=1; i<=p; i++)
        {
            cin>>x;
            a[x]= true;
        }
        int cnt=0;
        for(int i=1; i<=n; i++)
        {
            if(a[i])
            {
                cnt++;
            }
        }
        if(cnt==n)
        {
            cout<<"I become the guy."<<endl;
        }
        else cout<<"Oh, my keyboard!"<<endl;
        return 0;

}