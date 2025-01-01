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
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int  i=0; i<n;i++)
		{
			cin>>arr[i];
		}
		int currentNumber=arr[0];
		int ccnt=0;
		int ans=0;
		for(int i=0; i<n; i++)
		{
			if(arr[i]>currentNumber)
			{
				ans+= ccnt;
				ccnt=1;
				currentNumber=arr[i];
			}
			else if(arr[i]==currentNumber)
			{
				ccnt++;
			}
			//cout<<ccnt<<endl;
		}	
		cout<<ans<<'\n';
	}
	
	
	return 0;
}