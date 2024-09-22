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
	if(n==0)
	{
		cout<<1<<endl;
		return 0;
	}
	int arr[4]={6,8,4,2};
	cout<<arr[n%4]<<endl;

	return 0;
}