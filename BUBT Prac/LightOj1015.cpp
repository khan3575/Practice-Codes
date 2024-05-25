#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    int k=1;

    while(t--)
    {
    cin>>n;
    int i,sum=0;
    for(i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x<=0)
        {
            sum+=0;
        }
        else sum+=x;
    }
    cout<<"Case "<<k<<": "<<sum<<endl;
    ++k;
    }
    return 0;

}