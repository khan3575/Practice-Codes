#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int t;
	cin>>t;
	vector<int>books;
	while(t--)
	{
		int op, book;
		cin>>op;
		if(op==1)
		{
			cin>>book;
			books.push_back(book);
		}
		else if(op==2)
		{
			books.pop_back();
		}
		else{
			cout<<books.back()<<'\n';
		}
	}
	
	return 0;
}