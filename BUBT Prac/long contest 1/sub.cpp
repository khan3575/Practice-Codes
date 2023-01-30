#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<string >s;
    string t;
    for(i=0;i<n; i++)
    {
        cin>>t;
        s.push_back(t);
    }
    sort(s.begin(),s.end());
    for(i=0; i<n; i++)
    {
        cout<<s[i]<<endl;
    }

}