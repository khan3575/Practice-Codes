#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int both, alice,bob, none;
        int sum=0;
        cin>>both>>alice>>bob>>none;
        sum= sum+both;
        int mi= min(alice,bob);
        int like= both;
        if(none>=like)
        {
            sum+=like+1;
        }
        else{
            sum+= none;
            if(mi>none)
            {
                sum+= (mi-none);
            }
        }
        sum+=mi*2;
        cout<<sum<<endl;

    }
    return 0;
}