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
		int l,r,L,R;
		cin>>l>>r;
		cin>>L>>R;

		if(L>r)
		{
			cout<<1<<endl;
		}
		else{
			cout<<abs(L-r)<<endl;
		}

	}

	return 0;
}