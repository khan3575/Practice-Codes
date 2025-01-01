#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
const int mod = 1e9+7;
ll binaryExpo(ll a, ll b)
{
	ll res=1;
	while(b>0)
	{
		if(b&1){
			res= res*a %mod;
		}
		a= a * a %mod;
		b>>=1;	
	}
	return res;
}
int main()
{
	fastIO;
	int h1,h2,b1,b2,c1,c2;
	cin>>h1>>b1>>c1;
	cin>>h2>>b2>>c2;
	
	ll d1= b1*(c1-1) + b1*2;
	ll d2= b2*(c2-1) + b2*2;
	//cout<<d1<<" "<<d2<<endl;
	ll t1= (h2 +d1- 1) * binaryExpo(d1 *c1, mod-2);
    ll t2=(h1+d2-1)* binaryExpo(d2* c2, mod-2);

    if(t1<t2) 
    {
    	cout<<"MIKE TYSON\n";
    } 
    else if (t2 < t1) {
        cout<< "JAKE PAUL\n";
    } 
    else {
        cout<<"DRAW\n";
    }
	
	return 0;
}