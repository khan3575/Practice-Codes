#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=105;
int arr[N][N];
int brr[N][N];
int n,m;
void solve(int i, int j)
{
	if(i>=n)
	{
		return;
	}
	if(j >= m)
	{
		solve(i+1, 0);
		return;
	}
	cout<< arr[i][j]+ brr[i][j];

	if(j == m-1)
	{
		cout<<"\n";
	}
	else{
		cout<<" "; 
	}
	solve(i, j+1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0; i<n; i++)
	{

		for(int j=0; j<m; j++)
		{
			cin>>brr[i][j];
		}
	}
	solve(0,0);


	return 0;
}