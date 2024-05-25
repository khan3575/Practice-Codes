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
	map<int,int>mp;
	int x;
	for(int i=0; i<n;i++)
	{
		cin>>x;
		mp[x]++;
	}
	auto it= mp.begin();
	cout <<mp[*it.second]<<endl;

	return 0;
}