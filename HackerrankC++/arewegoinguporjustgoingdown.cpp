#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
typedef long long ll;

ll n,m;
ll dp[2000][2000];
string valence;

ll solve(ll pos, ll prevNum){
	
	if(pos == n)
		return 1;
		
	if(dp[pos][prevNum] > -1)
		return dp[pos][prevNum];
	else{
		ll ans = 0;
		
		for(int i = 0; i < m + 1; i++){
			if(valence[pos] == '0' && i < prevNum)
				ans = (ans + solve(pos + 1, i)) % MOD;
			else if(valence[pos] == '1' && i > prevNum)
				ans = (ans + solve(pos + 1, i)) % MOD;
			else if(valence[pos] == '-' && i == prevNum)
				ans = (ans + solve(pos + 1, i)) % MOD;
		}
		
		return dp[pos][prevNum] = ans;
	}
}

int main(){
	cin >> n >> m >> valence;
	
	ll ans = 0;
	memset(dp,-1,sizeof(dp));
	
	for(int i = 0; i < m + 1; i++){
		ans = (ans + solve(0,i)) % MOD;
	}
	
	cout << ans % MOD << endl;
}
