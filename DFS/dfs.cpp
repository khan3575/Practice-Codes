#include<bits/stdc++.h>
#include<vector>
using namespace std;
const int N=200005;
vector< int >v[N];
int deg[N];
vector<int> comp;
bool vis[N];
void dfs(int ver)
{
    vis[ver]=true;
    comp.push_back(ver);

    for(auto to : v[ver] )
    {
        if(!vis[to])
        {
            dfs(to);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int v1,v2;
        cin>>v1>>v2;
        --v1,--v2;
        v[v1].push_back(v2);
        v[v2].push_back(v1);
        ++deg[v1], ++deg[v2];
    }
    int ans=0;
    for(int i=0; i<n; i++)
    {
        if(!vis[i])
        {
            comp.clear();
            dfs(i);
            bool s= true;
            for(auto it: comp)
            {
                s &= (deg[it]==2);
            }
            if(s)
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;

}
