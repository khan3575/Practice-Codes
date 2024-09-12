#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int rt= sqrt(n);
		bool ok=true;
		if(rt*rt!= n)
		{
			cout<<"NO\n";
			continue;
		}
		else{
			for(int i=0; i<rt; i++)
			{
				
				if(s[i]=='0')
				{
					ok=false;
					break;
				}
			}
			
			for(int i=n-1; i>= n-rt && ok; i--)
			{
				
				if(s[i]=='0')
				{
					ok=false;
					break;
				}
			}
			
			for(int i=rt; i< n-rt && ok; i+=rt)
			{
				
				if(s[i]!='1' || s[i+rt-1]!='1')
				{
					ok=false;
				}
				for(int j=i+1; j<i+rt-1; j++)
				{
					
					if(s[j]!='0')
					{
						ok=false;
					}
				}
			}

		}
		
		if(ok)
		{
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}

	return 0;
}