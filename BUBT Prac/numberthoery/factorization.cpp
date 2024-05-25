#include<bits/stdc++.h>
using namespace std;
const int N=100;
vector<int>  deg[N];
void prime(int x)
{
    for(int i=2; i<=x; i++)
    {
        int co=0;
        while(x%i==0)
        {
            co++;
            x/=i;
        }
        deg[i].push_back(co);
    }
}

int main()
{
    int i,j,k,n;
    int t;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
        for(j=2; j<=n; j++)
        {
            prime(j);
        }
        cout<<"Case "<<i+1<<": "<<n<<" = ";
        for(k=1; k<=n; k++)
        {
            if(k>1 && deg[k]!=0)
            {

                cout<<k<< "("<<deg[k]<<")";
            }
            if(k>1 && k<n && deg[k]>0)
            {
                cout<<k<<" " <<deg[k];
                cout<<(k>1 && k<n && deg[k]>0)<<endl;
                cout<<" * ";
            }

        }cout<<endl;

        memset(deg, 0, N);
    }
}
