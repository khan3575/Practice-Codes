#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool ok=false;

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
		b= b%2;
		if(b==1 && a%2==0 && a>1)
		{
			cout<<"YES\n";
		}
		else if(b==0 && a%2==0)
		{
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}

	return 0;
}