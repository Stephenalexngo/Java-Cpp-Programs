#include <bits/stdc++.h>

#define MOD 1000000007LL

using namespace std;

typedef long long ll;

ll dp[500000];

ll solve(ll n){
    
    ll ans=0;
    
    if(dp[n])
        return dp[n];
    
    if(n == 0)
    	return dp[n] = 1;
    else{
    	for(int x=0; x<n; x++){
    		ans = (ans + (solve(x)*solve(n-1-x) % MOD)) % MOD;
		}
	}
	
    return dp[n] = ans;
} 
            
int main() {
    ll n;
    cin >> n;
    
    cout << solve(n) << endl;
}
