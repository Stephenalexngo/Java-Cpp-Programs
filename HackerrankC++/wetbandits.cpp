#include <bits/stdc++.h>

#define MOD 1000000007LL

using namespace std;

typedef long long ll;

ll dp[500000];
ll vals[100000];
ll n, k;

ll solve(ll pos){
    ll ans;
    
    if(pos >= n)
        return 0;
    if(dp[pos] > -1)
        return dp[pos];
    else
        ans = max(vals[pos] + solve(pos+k+1), solve(pos+1));
    
    return dp[pos] = ans;
} 
            
int main() {
    cin >> n >> k;
    memset(dp, -1, sizeof(dp));
    for(ll i = 0; i < n; i++)
        cin >> vals[i];
    
    cout << solve(0) << endl;
}
