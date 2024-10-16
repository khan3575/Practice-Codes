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
		while(t--)
		{
			int n;
			string s;
			cin>>n>>s;
			if(s=="FIFO")
			{
				queue<int> q;
				int val;
				string op;
				for(int i=0; i<n;i++)
				{
					cin>>op;
					if(op=="IN")
					{
						int val;
						cin>>val;
						q.push(val);
					}
					else{
						if(q.empty())
						{
							cout<<"None\n";
						}
						else{
							cout<<q.front()<<'\n';
							q.pop();
						}
					}
				}
			}
			else{
				stack<int> q;
				int val;
				string op;
				for(int i=0; i<n;i++)
				{
					cin>>op;
					if(op=="IN")
					{
						int val;
						cin>>val;
						q.push(val);
					}
					else{
						if(q.empty())
						{
							cout<<"None\n";
						}
						else{
							cout<<q.top()<<'\n';
							q.pop();
						}
					}
				}

			}
		}
		
		return 0;
	}