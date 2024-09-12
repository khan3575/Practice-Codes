#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n,m;
int arr[12][12];
int ans;
void func(int i, int j, int sum)
{
	if(i==n || j==m)
	{
		return;
	}
	if(i==n-1 && j== m-1)
	{
		ans= max(ans,sum);
		return;
	}

	func(i+1, j, sum+arr[i+1][j]);
	func(i, j+1, sum+arr[i][j+1]);

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ans= INT_MIN;
	cin>>n>>m;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>arr[i][j];
		}
	}

	func(0,0,arr[0][0]);
	cout<<ans<<endl;
	return 0;
}