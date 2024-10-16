#include<iostream>
using namespace std;
typedef long long int ll;
const int N=1e7+1;
ll arr[N];
void precal()
{
	arr[0]=0;
	for(int i=1; i<N;i++)
	{
		for(int j=i; j<N; j+=i)
		{
			arr[j]++;
		}
		arr[i]*=i;
		arr[i]+=arr[i-1];
	}

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	precal();
	int n;
	cin>>n;
	cout<<arr[n]<<endl;

	return 0;
}