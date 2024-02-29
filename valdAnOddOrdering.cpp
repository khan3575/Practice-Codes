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
		int n, k;
		cin>>n>>k;
		int temp = n;
		int p = 1;
		while(temp)
		{
			int take = temp - temp/2;
			if(k<=take)
			{
				cout<< p*(2*k-1)<<endl;
				break;
			}
			p*=2;
			k-=take;
			temp/=2;
		}
	}
	return 0;
}