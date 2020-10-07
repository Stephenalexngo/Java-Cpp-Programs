#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll values[300000][2];
ll dp [300000][2];

void solve(ll n,ll k){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 2; j++){
			if(i == 0)
				dp[i][j] = values[i][j];
			else if(j == 0)
				dp[i][j] = min(dp[i-1][j],dp[i-1][j+1] + k) + values[i][j];
			else if(j == 1)
				dp[i][j] = min(dp[i-1][j-1] + k, dp[i-1][j]) + values[i][j];
		}
	}
}

int main(){
	ll n,k;
	
	cin >> n >> k;
	
	for(int i = 0; i < n; i++){
		ll i1,i2;
		
		cin >> i1 >> i2;
		values[i][0] = i1;
		values[i][1] = i2;
	}
	
	solve(n,k);
	cout << min(dp[n-1][0],dp[n-1][1]);
}
