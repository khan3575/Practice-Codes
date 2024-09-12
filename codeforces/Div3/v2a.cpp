#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    set<int> s;
    int i,j;
    for(i=0; i<n;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }
    for(i=n-1; i>=1; i--)
    {
        for(j=i-1; j>=0; j--)
        {
            if(arr[i]==0)
            {
                continue;
            }
         if(arr[i]==arr[j])
            {
                arr[j]=0;
            }
        }
    }
    cout<<s.size()<<endl;
    for(i=0; i<n; i++)
    {
        if(arr[i]!=0)
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}
