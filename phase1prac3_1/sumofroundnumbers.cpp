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
		 int n;
		 cin>>n;
		 int cnt=1;
		 vector<int>v;
		 while(n>0)
		 {
		 	
		 	if(n%10!=0){
		 		int rem = n%10;
		 		rem*= cnt;
		 		v.push_back(rem);
		 	}
		 	cnt*=10;
		 	n/=10;
		 }
		 cout<<v.size()<<endl;
		 for(int i: v)
		 {
		 	cout<<i<<" ";
		 }
		 cout<<endl;
	}
	return 0;
}