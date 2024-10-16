#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>v(n+1);
		for(int i=1; i<=n;i++)
		{
			cin>>v[i];
		}
		int count=0;
		int arr[10]={0};
		for(int i=1; i<=n;i++)
		{
			for(int j=1; j<=n; j++){
				for(int k=1; k<=n; k++)
				{
					int dif=abs(v[i]-v[k]);
					int total= abs(i-j)+abs(j-k);

					cout<<v[i]<<" "<<v[k]<<" Ai-Ak :"<<dif<<" i= "<<i<<" j= "<<j<< " k= "<<k<<" total "<<total<<endl;
					arr[total]++;
				}
				cout<<endl;
			}
			cout<<endl;
		}
		for(int i=0; i<10; i++)
		{
			cout<<"i :"<<i<<" arr:" <<arr[i];
			cout<<endl;
		}

	}
	
	return 0;
}