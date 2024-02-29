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
	bool vis[n+1]={false};
	int arr[n+1]={0};
	for(int i=2; i<=n; i++)
	{
		if(vis[i]==false){
			
			for(int j=2*i; j<=n; j+=i)
			{
				vis[j]=true;
				//cout<< j<<" ";
				arr[j]++;
			}
			//cout<<endl;
		}
	}
	int cnt=0;
	for(int i=2; i<=n; i++)
	{
		if(arr[i]==2)
			{
				//cout<<i<<endl;
				cnt++;
			}
	}
	cout<<cnt<<endl;

	return 0;
}