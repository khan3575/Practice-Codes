
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
	vector<bool> ans(n+2,false);
	ll prod= 1;
	for(int i=1; i<n; i++)
	{
		if(__gcd(n,i)==1)
		{
			ans[i]=true;
			prod= (prod*i)%n;
		}
	}
	if(prod!=1)
	{
		ans[prod]=0;
	}
	ll cou= count(ans.begin(), ans.end(),1);
	cout<< cou<<endl;
	for(int i=1; i<n; i++)
	{
		if(ans[i])
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	
	return 0;
}