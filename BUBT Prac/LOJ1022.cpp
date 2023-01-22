#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i=1;
    while(t--){
    double r, pi;
    pi= 2*acos(0.0);
    cin>>r;
    double d= 2*r;
    d= d*d;
    double area= pi * r*r;
    double rem= d-area;
    printf("Case %d: %.2lf\n",i,rem );
    i++;
    }
    return 0;
}