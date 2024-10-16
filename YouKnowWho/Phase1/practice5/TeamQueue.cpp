#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
int main()
{
	fastIO;
	int cases;
	int scenario=1;
	while(cin>>cases and cases>0){
		map<int,int> TeamMemebers;
		for(int i=1; i<=cases; i++)
		{
			int numberOfTeamMembers;
			cin>>numberOfTeamMembers;
			
			while(numberOfTeamMembers--)
			{
				int x;
				cin>>x;
				TeamMemebers[x]=i;
			}
		}
		queue<int> teams_Queue;
		cout<<"Scenario #"<<scenario<<'\n';
		map<int,queue<int>> team_member_in_queue;
		string op;
		while(cin>>op and op != "STOP"){

			if(op=="ENQUEUE")
			{
				int x;
				cin>>x;
				int members_team_id= TeamMemebers[x];
				if(!team_member_in_queue[members_team_id].empty())
				{
					team_member_in_queue[members_team_id].push(x);
				}
				else{
					teams_Queue.push(members_team_id);
					team_member_in_queue[members_team_id].push(x);
				}
			}
			else{
				int team_at_front= teams_Queue.front();
				cout<< team_member_in_queue[team_at_front].front()<<'\n';
				team_member_in_queue[team_at_front].pop();

				if(team_member_in_queue[team_at_front].empty())
				{
					teams_Queue.pop();
				}
			}
		}
		cout<<'\n';
		scenario++;
	}
	
	return 0;
}