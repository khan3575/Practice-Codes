#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char k;
        cin>>n>>k;
        string s;
        cin>>s;
        int loc=1;
        for(int i=0; i<n;i++)
        {
            if(loc && s[i]<k){
                loc=0;
                cout<<k;
            }
            cout<<s[i];
        }
        if(loc)
        {
            cout<<k;
        }
        cout<<endl;
        
    }
    return 0;
}