#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;
const int N=100005;
int arr[N];
bool isPalindrome(int i)
{
	if(i==n/2)
	{
		return true;
	}
	bool ok= true;
	ok &= (arr[i]==arr[n-i-1]);
	ok &= isPalindrome(i+1);
	return ok;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	for(int i=0; i<n;i++)
	{
		cin>>arr[i];
	}
	if(isPalindrome(0))
	{
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}

	return 0;
}