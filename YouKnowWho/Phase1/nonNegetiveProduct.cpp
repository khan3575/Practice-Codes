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
		int n;
		cin>>n;
		bool isZero=false;
		int cnt=0;
		int x;
		for(int i=0; i<n;i++)
		{
			cin>>x;
			if(x==0)
			{
				isZero=true	;
			}
			else if(x<0)
			{
				cnt++;
			}
		}
		if(isZero)
		{
			cout<<0<<endl;
		}
		else if(cnt%2==1)
		{
			cout<<1<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}

	return 0;
}