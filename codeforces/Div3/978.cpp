#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int range[n];
    int pre[n+5];
    int val[m];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>range[i];
        sum+=range[i];
        pre[i+1]=sum;
    }
    for(int i=0; i<m; i++)
    {
        cin>>val[i];
    }
    sort(val,val+m);
    for(i=0; i<n; i++)
    {
        for(int j=0; j<m+1; j++)
        {
            
        }
    }


}