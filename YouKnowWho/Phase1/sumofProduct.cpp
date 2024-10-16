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
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		ll sum=0;
		ll cnt=0;
		bool ok=true;
		for(int i=0; i<n;i++)
		{
			if(arr[i]==1)
			{
				cnt++;
			}
			else{
				sum+= cnt*(cnt+1)/2;
				cnt=0;
			}
		}
		if(cnt>0)
		{sum+= (cnt*(cnt+1))/2;}
		
		cout<<sum<<endl;
	}

	return 0;
}