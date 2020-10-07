#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007LL
typedef long long ll;

int dp[3000][3000];

void solve(int n, int r){
	
	for(int i = 0; i < n + 1; i++){
		for(int j = 0; j < r + 1; j++){
			if(i == 0 && j == 0)
				dp[i][j] = 1;
			else if(i == 0)
				dp[i][j] = 0;
			else if(j == 0)
				dp[i][j] = 1;
			else
				dp[i][j] = (dp[i][j-1] % MOD + dp[i-1][j] % MOD) % MOD;
		}
	}
}

int main(){
	ll q,n,r;
	
	scanf("%lld", &q);
	solve(2000,2000);
	for(int i = 0; i < q; i++){
		scanf("%lld %lld", &n, &r);
		printf("%d\n", dp[n][r] % MOD);
	}
}
