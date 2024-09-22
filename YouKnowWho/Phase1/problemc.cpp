#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int x,y,z;
	cin>>x>>y>>z;

	int n=4;

	int teama=0;
	int teamb=0;

	teama+= (x*2);
	teama+= (y);
	teamb+=(y);
	teamb+=(z*2);

	n= (n-x-y-z);

	if(n*2+teama>teamb)
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}

	return 0;
}