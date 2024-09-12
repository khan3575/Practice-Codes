#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n,m;
int ans=0;
void func(int i, int j)
{
	if(i>j)
	{
		return;
	}
	if(i==j)
	{
		ans++;
		return;
	}
	
	func(i+1,j);
	func(i+2,j);
	func(i+3,j);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	func(n,m);
	cout<<ans<<endl;
	return 0;
}