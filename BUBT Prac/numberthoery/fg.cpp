#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a,b,c=1;
        int x= (n-1)/2;
        if(n%2==0)
        {
            cout<<2<<" "<<n-3<<" "<<1<<endl;
        }
        else {
            if(x%2==0)
            {
                    cout<<x+1<< " "<<x-1<< " "<<1<<endl;
            }
            else 
            cout<<x-2<<" "<<x+2<<" "<<1<<endl;
        }
        
    }
    return 0;
}