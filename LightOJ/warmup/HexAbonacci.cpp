#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int a, b, c, d, e, f;
int dp[10006];
const int mod = 10000007;
int fn(int n) {
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    return dp[n] =(fn(n-1)%mod + fn(n-2)%mod + fn(n-3)%mod + fn(n-4)%mod + fn(n-5)%mod + fn(n-6)%mod)%mod;
}
void init()
{
    dp[0]=a;
    dp[1]=b;
    dp[2]=c;
    dp[3]=d;
    dp[4]=e;
    dp[5]=f;
    for(int i=6; i<10005; i++)
    {
        dp[i]=-1;
    }
}
int main() {

    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        init();
        printf("Case %d: %d\n", caseno, fn(n) % 10000007);
    }
    return 0;
}
