#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k;
	cin>>n>>k;

	if(n&1)
	{
		if(k>(n/2)+1)
		{
			cout<< ((k-1)-(n/2))*2<<endl;
		}
		else{
			cout<<(k*2)-1<<endl;
		}
	}
	else{
		if(k>(n/2))
		{
			cout<< (k-(n/2))*2<<endl;
		}
		else{
			cout<<(k*2)-1<<endl;
		}
	}

	return 0;
}