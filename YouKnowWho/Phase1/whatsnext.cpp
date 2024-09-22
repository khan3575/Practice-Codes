#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b,c;
	while(1)
	{
		cin>>a>>b>>c;
		if(a==0 && b==0 && c==0)
		{
			break;
		}

		if(abs(a-b)==abs(b-c))
		{
			cout<<"AP "<< c+c-b<<endl;
		}
		else{
			cout<<"GP "<< c*(b/a)<<endl;
		}
	}

	return 0;
}