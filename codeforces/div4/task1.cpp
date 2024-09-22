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
	char arr[5]={'a','e','i','o','u'};
	while(t--)
	{
		int n;
		cin>>n;
		if(n<=5)
		{
			for(int i=0; i<n; i++)
			{
				cout<<arr[i%5];
			}
			cout<<'\n';
		}
		else{
			string s="";
			int brr[5]={0};
			int x=ceil(n/5.0);
			brr[0]=x;
			n-=x;
			x=ceil(n/4.0);
			brr[1]=x;
			n-=x;
			x=ceil(n/3.0);
			brr[2]=x;
			n-=x;
			x=ceil(n/2.0);
			brr[3]=x;
			n-=x;
			brr[4]=n;
			for(int i=0;i<5;i++)
			{
				for(int j=0; j<brr[i]; j++)
				{
					cout<<arr[i];
				}
			}
			cout<<endl;
		}
	}

	return 0;
}