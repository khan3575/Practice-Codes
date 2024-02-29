#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n= 43223;
	cout<<bitset<16>(n)<<endl<< bitset<16>(5929)<<endl;;

	ll ans= (1<<0)+ (1<<2) + (1<<5) + (1<< 6) + (1<<7) + (1<<9) + (1<<11);
	cout<<ans<<endl;
}