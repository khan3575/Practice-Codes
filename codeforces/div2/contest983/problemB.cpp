	#include<bits/stdc++.h>
	using namespace std;
	#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
	#define ll long long
	const int mod = 1e9+7;
	int main()
	{
		fastIO;
		int t;
		cin>>t;
		while(t--)
		{
			int n,k;
			cin>>n>>k;
			if(n==1 and k==n)
			{
				cout<<"1\n1\n";
			}
			else if(k==1 || k==n)
			{
				cout<<"-1\n";
			}
			else{
				if(k%2==0)
				{
					cout<<"3\n";
					cout<<1<<" "<<k<< " "<<k+1<<endl;
				}
				else{
					cout<<"5\n";
					cout<<1<<" "<<2<<" "<<k<<" "<<k+1<<" "<<k+2<<endl;
				}
			}
		}
		
		return 0;
	}