#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%2==0)
		{
			for(int i=n;i>0; i--)
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}
		else{
			for(int i=n; i>0; i--)
			{
				if((n+1)/2==i)
				{
					continue;
				}
				cout<<i<<" ";
			}
			cout<<(n+1)/2<<endl;

		}
	}
	
	return 0;
}