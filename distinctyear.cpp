#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int year;
	cin >> year;
	for(int i= year+1; i <= 10000; i++)
	{
		set<int> st;
		int temp= i;
		while(temp)
		{
			st.insert(temp%10);
			temp/=10;
		}
		if(st.size()==4)
		{
			cout<<i<<endl;
			return 0;
		}

	}
	return 0;
}