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
		int l,r;
		cin>>l>>r;
		if(l*2>r){
			cout<<"-1 -1"<<endl;
		}
		else{

			cout<<l<<" "<<l*2<<endl;
		}
	}

	return 0;
}