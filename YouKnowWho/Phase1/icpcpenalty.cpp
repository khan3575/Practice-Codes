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
		int m,p;
		cin>>m>>p;
		int cnt=0;
		for(int i=m,j=1; i<299&&((j*20)+p+i)<1000; i++,j++)
		{
			cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}