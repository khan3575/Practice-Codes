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
		int n,m;
		cin>>n>>m;
		int dif= abs(n-m);
		int cnt= dif/10;
		int rem= dif%10;
		if(rem!=0)
		{
			cnt++;
		}
		cout<<cnt<<endl;

	}

	return 0;
}