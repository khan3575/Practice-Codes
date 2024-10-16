#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	double ans=0.0;
	for(int i=1; i<=n;i++)
	{
		ans+= (1.0/double(i));
	}
	cout<<ans<<endl;

	return 0;
}