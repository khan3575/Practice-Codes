#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void digit(int n)
{
	if(n==0)
	{
		return;
	}
	
	digit(n/10);cout<< n%10<<' ';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		if(x==0)
		{
			cout<<0<<endl;
			continue;
		}

		digit(x);
		cout<<"\n";
	}

	return 0;
}