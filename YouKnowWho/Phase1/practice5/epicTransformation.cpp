#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
const int mx=1e5;
int main()
{
    fastIO;
    int n;
    cin>>n;
    deque<int>a,b;
    int k;
    cin>>k;
    int x;
    while(k--)
    {
        cin>>x;
        a.push_back(x);
    }
    cin>>k;
    while(k--)
    {
        cin>>x;
        b.push_back(x);
    }
    int score =0;
    bool ok=true;
    while(score<mx)
    {
        if((int)a.size()==0)
        {
            cout<<score<<" "<<2<<endl;
            ok=false;
            break;
        }
        if((int)b.size()==0)
        {
            cout<<score<<" "<<1<<endl;
            ok=false;
            break;
        }
        int topa=a.front();
        a.pop_front();
        int topb= b.front();
        b.pop_front();

        if(topa>topb)
        {
            a.push_back(topb);
            a.push_back(topa);
        }
        else{
            b.push_back(topa);
            b.push_back(topb);
        }
        score++;
    }
    if(ok)
    {
        cout<<-1<<endl;
    }
    
    return 0;
}