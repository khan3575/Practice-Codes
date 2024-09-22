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
		int d,x,y;
		cin>>d>>x>>y;
		if(x<=y)
		{
			cout<<0<<endl;
			continue;
		}
		int cnt=0;
		int starting=x;
		while(y){
			y--;
			cnt++;
			if(starting*(100-cnt*d) <= y*100)
			{
				cout<<cnt<<endl;
				break;

			}
			else{
				if(y==0 && (starting*(100-cnt*d)>y*100))
				{
					cout<<-1<<endl;
					break;
				}
			}
		}
	}
	return 0;
}