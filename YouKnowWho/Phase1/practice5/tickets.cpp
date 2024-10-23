#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int n;
	cin>>n;
	queue<int>q;
	while(n--)
	{
		int x,val;
		cin>>x>>val;
		if(x==1)
		{
			q.push(val);
		}
		else{
			int ter= q.front();
			q.pop();

			if(ter==val)
			{
				cout<<"Yes\n";
			}
			else{
				cout<<"No\n";
			}
		}
	}
	
	return 0;
}