#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int k , s;
	cin>> k>> s;
	int ans=0;
	for(int i=0; i<=k; i++)
	{
		for(int j=0; j<=k; j++)
		{
			int rem= s- i-j;
			if(rem>=0 && rem<=k)
			{
				ans= ans+1;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}