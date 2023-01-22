#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"hellooooo";
    cin>>n;
    int mat[n][n]={0};
    int k,l;
1    while(n--)
    {
        cin>>k>>l;
        mat[k][l]=1;
        mat[l][k]= 1;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}