#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void convert(int x)
{
	if(x==0){
		return;
	}
	convert(x/2);
	if(x%2==0)
	{
		cout<<0;
	}
	else{
		cout<<1;
	}
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
		convert(x);
		cout<<'\n';
	}

	return 0;
}