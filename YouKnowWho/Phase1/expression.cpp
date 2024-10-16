#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int  func(int a, int b, int c)
{
	int ans =0;
	ans=max(ans,a+(b*c));
	ans=max(ans,(a+b)*c);
	ans=max(ans,a*(b+c));
	ans=max(ans,(a*b)+c);
	ans=max(ans,a*(b*c));
	ans=max(ans,a+(b+c));
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b,c;
	cin>>a>>b>>c;
	cout<<func(a,b,c);

	return 0;
}