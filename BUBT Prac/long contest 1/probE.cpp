#include<bits/stdc++.h>
using namespace std;
double ara(double r, double o)
{
    double ar= .5* r*r*o;
    return ar;
}
double angle(double opp_A, double opp_B, double opp_C)
{
    return acos( ( (opp_B*opp_B)+(opp_C*opp_C)-(opp_A*opp_A) ) / (2*opp_B*opp_C) ) ;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        double a,b,c;
        cin>>a>>b>>c;
        double s= (a+b+c+a+b+c)/2.0;
        double area= sqrt(s*(s-a-b)*(s-b-c)*(s-c-a));
        area-= ara(a,angle(b+c, c+a, a+b));
        area-= ara(b, angle (a+b, c+a, b+c));
        area-= ara(c, angle (a+b, b+c, c+a));

        cout << "Case " << i+1 << ": " ;
        cout<< fixed<< setprecision(10)<<area<<endl;
    }
    return 0;
}