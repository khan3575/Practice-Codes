#include<bits/stdc++.h>
using namespace std;
int power(int x)
{
    int p=0;
    while(x!=1)
    {
        x/=2;
        p++;
    }
    return p;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int po=power(n);
        int sum= po*x + (po-1)*y;
        cout<<sum<<endl;
    }
    
    return 0;
}
