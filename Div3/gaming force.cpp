#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        int i;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int none=0;
        for(i=0; i<n; i++)
        {
            if(a[i]==1)
            {
                none++;
            }
            else break;
        }
        int rem= n-none;

        if(none&1)
        {
            none= (none/2)+1;
        }
        else{
            none=none/2;
        }
        rem= none+ rem;
        cout<<rem<<endl;
    }
    return 0;

}