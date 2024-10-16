#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
const int N=30;
int n;
vector<int> v[N];
pair<int,int> getLoc(int a)
{
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<v[i].size(); j++)
		{
			if(v[i][j]==a){
				return make_pair(i,j);
			}
		}
	}
	return make_pair(0,0);
}
void move_to_initial(int a_vector_id, int a_loc)
{
	for(int i=a_loc+1; i<v[a_vector_id].size(); i++)
	{
		int x= v[a_vector_id][i];
		v[x].push_back(x);
	}
	v[a_vector_id].resize(a_loc+1);
}
void move_on_top(int a_vector_id,int a_loc, int b_vector_id)
{
	for(int i=a_loc; i<v[a_vector_id].size(); i++)
	{
		int x=v[a_vector_id][i];
		v[b_vector_id].push_back(x);	
	}
	v[a_vector_id].resize(a_loc);
}

int main()
{
	fastIO;
	
	cin>>n;
	for(int i=0; i<n;i++)
	{
		v[i].push_back(i);
	}
	string op;
	while(cin>>op && op!="quit")
	{
		int a,b;
		string type;
		cin>>a>>type>>b;
		auto[a_vector_id, a_loc]= getLoc( a);
		auto[b_vector_id, b_loc]=getLoc(b);

		if(a_vector_id==b_vector_id)
		{
			continue;
		}
		if(op=="move")
		{
			if(type=="onto")
			{
				move_to_initial(a_vector_id,a_loc);
				move_to_initial(b_vector_id,b_loc);
				move_on_top(a_vector_id,a_loc,b_vector_id);
			}
			else
			{
				move_to_initial(a_vector_id,a_loc);
				move_on_top(a_vector_id,a_loc,b_vector_id);				
			}
		}
		else{
			if(type=="onto")
			{
				move_to_initial(b_vector_id,b_loc);
				move_on_top(a_vector_id,a_loc,b_vector_id);
			}
			else{
				move_on_top(a_vector_id,a_loc,b_vector_id);
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		cout<<i<<":";
		for(int j=0; j<v[i].size(); j++)
		{
			cout<<' '<<v[i][j];
		}
		cout<<'\n';
	}
	return 0;
}