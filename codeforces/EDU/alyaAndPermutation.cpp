#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int highestBitMask(int x) 
{
	int cnt=0;
	int ans=1;
	while(x)
	{
		x/=2;
		ans*=2;
	}
	//cout<<ans<<endl;
	ans--;
	return ans;
}
int main()
{
	fastIO;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v;
		int k=0;
		if(n&1)
		{
			for(int i=2; i<n-1; i+=2)
			{
				v.push_back(i);
			}
			for(int i=1; i<n; i+=2)
			{
				v.push_back(i);
			}
			v.push_back(n-1);
			v.push_back(n);
		}
		else{
			int fact=highestBitMask(n);
			cout<<"fact "<<fact<<endl;

			int last= fact ^ (n&n-1);

			//cout<<"last "<<last<<endl;
			for(int i=2; i<n-2; i++)
			{
				v.push_back(i);
			}
			for(int i=1; i<n-1; i+=2)
			{
				if(i==last || last==fact)
				{
					continue;
				}
				v.push_back(i);
			}
			if(last==fact)
			{
				v.push_back(n-1);
				v.push_back(n);
			}
			else{
				v.push_back(n);
				v.push_back(n-1);
				v.push_back(last);
			}
			
			
			

		}
		for(int i=0; i<n; i++)
		{
			if(i&1)
			{
				k|=v[i];
			}
			else{
				k&=v[i];
			}
		}
		cout<<k<<endl;
		for(auto it: v)
		{
			cout<<it<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}