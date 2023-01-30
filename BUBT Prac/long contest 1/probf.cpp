#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        break;
        int d= sqrt(n);
        if(d*d==n)
        {cout<<"yes"<<endl;}
        else cout<<"no"<<endl;
    }
    return 0;
}