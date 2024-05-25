#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void fun(int n, int i)
{
	if(i>n)
	{
		return;
	}
	
	fun(n,i+1);cout<<i<<'\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	fun(n,1);


	return 0;
}