#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll terget;
bool ok=false;
void fun(ll initial,l i, ll n, ll arr[])
{
	if(i>n)
	{
		if(initial==terget)
		{
			ok=true;
		}
		return;
	}

	fun(initial+arr[i], i+1, n, arr);

	fun(initial-arr[i], i+1, n, arr);

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin>>n>>terget;
	ll arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	fun( arr[0],1, n, arr);
	if(ok)
	{
		cout<<
	}

	return 0;
}