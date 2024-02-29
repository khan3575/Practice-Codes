#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n=22;
		int ans= 0;
		int pos=-1;
		int x,y;
		for(int i=0; i<n; i++)
		{
			cin>>x>>y;
			int temp= (x+(y*20));
			if(ans< temp)
			{
				ans= temp;
				pos= i;
			}
		}
		cout<<pos+1<<'\n';
	}
	return 0;
}