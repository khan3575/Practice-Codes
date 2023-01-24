#include<bits/stdc++.h>
using namespace std;
vector<int> v[1000];
bool vis[1000];
void DFS(int vertex)
{
    vis[vertex]= true;
    for(int child : v[vertex])
    
    {
        if(!vis[vertex])
        {
            cout<<"par"<<vertex<<" child"<<child<<endl;
            vis[vertex]= true;
        }
    }


}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        v[v1].push_back(v2);
        v[v2].push_back(v1);
    }

    for(int i=0; i<m; i++)
{
    DFS(i);
}
}
