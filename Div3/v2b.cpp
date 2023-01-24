#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int x_count=0;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if((s[i]==s[i+1])&&(s[i+1]==s[i+2])&&(s[i]=='x'))
        {
            sum++;
        }
    }
    cout<<sum<<endl;
return 0;
}
