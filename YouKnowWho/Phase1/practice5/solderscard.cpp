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
	int l,k;
	cin>>l;
	int arr[l];
	for(int i=0; i<l; i++)
		{
			cin>>arr[i];
		}
	cin>>k;
	int brr[k];
	for(int i=0; i<k;i++)
	{
		cin>>brr[i];
	}
	if(n%2==1)
	{
		cout<<-1<<endl;
	}
	else{
		deque<int>q1,q2;
		for(int i=0;i<l;i++)
		{
			q1.push_back(arr[i]);
		}
		for(int i=0; i<k; i++)
		{
			q2.push_back(brr[i]);
		}
		int cnt=0;
		int ans=-1;
		while((int)q1.size()!=0 && (int)q2.size()!=0 && cnt<INT_MAX-1)
		{
			int x=q1.front();
			int y=q2.front();
			//cout<<x<<" "<<y<<endl;
			q1.pop_front();
			q2.pop_front();
			if(x>y)
			{
				q1.push_back(y);
				q1.push_back(x);
			}
			else{
				q2.push_back(x);
				q2.push_back(y);
			}
			cnt++;

		}
		if((int)q1.size()==0){
			ans=2;
		}
		else{
			ans=1;
		}
		cout<<cnt<<" "<<ans<<endl;
	}
	
	return 0;
}