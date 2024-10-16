#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int n;
	cin>>n;
	int sum=0;
	int x;
	for(int i=0; i<n; i++){
		cin>>x;
		sum+=x;
	}
	cout<< (double)sum/(double)n<<endl;
	
	return 0;
}