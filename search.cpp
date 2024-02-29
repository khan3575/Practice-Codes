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
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int x;
	cin>>x;
	int it=-1;
	for(int i=0; i<n; i++)
	{
		if(arr[i]==x)
		{
			it= i;
			break;
		}
	}
	cout<< it<<endl;
	return 0;
}