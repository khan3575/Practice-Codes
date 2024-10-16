#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b,c;
	cin>>a>>b>>c;
	int d= b*b - 4*a*c;

	if(d<0)
	{
		cout<<"No roots\n";
	}
	else if(d==0)
	{
		cout<<"One root: "<< -1*b/(2*a)<<endl;
	}
	else{
		int aa,bb;
		aa= (-1*b -sqrt(d))/(2*a);
		bb= ((-1*b +sqrt(d))/(2*a));
		if(aa>bb)
		{
			swap(aa,bb);
		}
		cout<<"Two roots: "<<aa<<" "<<bb<<endl;
	}



	return 0;
}