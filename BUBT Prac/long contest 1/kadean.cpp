#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n];
    int i;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    long long max_end=0,max_sf=INT_MIN;
    for(i=0; i<n; i++)
    {
        max_end= max_end+arr[i];
        if(max_end<arr[i])
        {
            max_end= arr[i];
        }
        if(max_sf<max_end)
        {
            max_sf= max_end;
        }
    }
    cout<<max_sf<<endl;
    return 0;

}
