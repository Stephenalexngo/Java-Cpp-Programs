#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

typedef long long ll;

ll solve(ll pos, ll x, ll dp[][2000]){
    
    if(dp[pos][x] != -1)
        return dp[pos][x];
    
    if(x == 0 && pos > 0)
        return dp[pos][x] = 0;
    if(x == 0 && pos == 0)
        return dp[pos][x] = 1;

    if(x > 0 && pos > 0)
        dp[pos][x] = ((solve(pos-1,x-1, dp)%MOD) + (solve(pos+1, x-1, dp)%MOD))%MOD;
    else if(pos == 0 && x > 0)
        dp[pos][x] = solve(pos+1, x-1, dp)%MOD;
    
    return dp[pos][x];
}

int main() {
    ll n;
    ll dp[2000][2000];
    scanf("%lld", &n);
    memset(dp, -1, sizeof(dp)); 
    
    printf("%lld", solve(0,n,dp));
}
