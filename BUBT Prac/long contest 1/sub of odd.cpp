#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x,y;
    int k=1;
    while(cin>>x>>y && k<=t)
    {
        int i;
        if(x&1){
            i=x;
        }
        else {
            i=x+1;
        }
        int sum=0;
        for(;i<=y;i+=2)
        {
            sum+=i;
        }
        cout<<"Case "<<k<<": "<<sum<<endl;
        k++;
    }
    return 0;
}