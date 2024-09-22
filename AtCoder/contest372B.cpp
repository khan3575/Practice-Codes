#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int res[11];
	for(int i=0; i<=10; i++)
	{
		res[i]=pow(3,i);
		//cout<<res[i]<<endl;
	}
	int n;
	cin>>n;
	int loc=10;
	vector<int>v;
	while(n)
	{
		
		while(res[loc]>n)
		{
			loc--;
		}
		//cout<< "loc" <<loc<<endl;
		while(res[loc]<=n)
		{
			n-=res[loc];
			v.push_back(loc);
		}
	}
	cout<<v.size()<<endl;
	for(auto it: v)
	{
		cout<<it<<" ";
	}
	cout<<endl;

	

	return 0;
}