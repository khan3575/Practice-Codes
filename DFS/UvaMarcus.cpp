#include<bits/stdc++.h>
using namespace std;
string a[9];
string ans[7];
const string need={"IEHOVA#"};
void dfs(int x, int y, int pos)
{
    if(a[x][y]=='#')
    {
        cout<<ans[0];
        for(int i=0; i<pos; i++)
        {
            cout<<" "<<ans[i];
        }
        cout<<endl;
        return;
    }
    else if(need.size()==pos)
    {
        return;
    }
    if(a[x][y+1]==need[pos]){
        ans[pos]="left"; pos++;
        dfs(x, y+1,pos);
       
    }
    else if(a[x][y-1]==need[pos]){
        ans[pos]="right";
         pos++;
        dfs(x, y-1,pos);
       
    }
    else if(a[x-1][y]==need[pos]){
        ans[pos]="forth";
        pos++;
        dfs(x-1, y,pos);
        
    }

}
int main(){
        int t;
        cin>>t;
        while(t--)
        {
            int x,y;
            cin>>x>>y;
            for(int i=0; i<x; i++)
            cin>>a[i];

            int xx, yy;
            for(int i=0; i<x;i++)
            {
                for(int j=0; j<y; j++)
                {
                    if(a[x][y]=='@')
                    {
                        xx=i;
                        yy=j;
                    }
                }
            }
            dfs(xx,yy,0);
        }
}