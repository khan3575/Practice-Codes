#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin>>s;
	int val =0;
	for(int i=0; i<s.size(); i++)
	{
		val += s[i]-'0';
	}
	if(s.size()<=1)
	{
		cout<< 0<<endl;
		return 0;
	}
	int ans=1;
	while(val>9)
	{
		int temp=0;
		while(val)
		{
			temp += val%10;
			val/=10;
		}
		val=temp;
		ans++;
	}
	cout<< ans<<endl;


	return 0;
}