#include <bits/stdc++.h>

#define MOD 1000000007LL

using namespace std;

typedef long long ll;

ll dp[500000];

ll solve(ll n, string s){
    
    for(int position=n; position>0; position--){
        if(position == n)
            dp[position] = 1;
        else if(position > n || s[position - 1] == '1') 
            dp[position] = 0;
        else if(position + 2 > n)
            dp[position] = dp[position + 1] % MOD;
        else
            dp[position] = (dp[position+1] + dp[position+2]) % MOD;
    }
    
    return dp[1];
} 
            
int main() {
    ll n,ans;
    string s;
    cin >> n >> s;
      
    ans = solve(n,s);
    
    // for(int x=0; x<10; x++){
    //     cout << "DP = " << dp[x] << endl;
    // }
    
    cout << ans << endl;
}