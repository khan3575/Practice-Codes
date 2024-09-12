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
		int a,b;
		cin>>a>>b;
		int mn= min(a,b);
		int mx= max(a,b);

		int res= min(max(0, mn-(mx/2)), max(0, mn*2-mx));
		cout<<res<<endl;

	}

	return 0;
}