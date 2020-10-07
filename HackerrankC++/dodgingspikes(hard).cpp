#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007LL
#define INF 1000000000

typedef long long ll;

int n,k;
string line;
vector<int> jumps;
int dp[100001] = {0};
int dpmin[100001] = {0};

void solve(int pos){
	
	for(int i = pos; i > 0; i--){
		if(i == n){
			dpmin[i] = 0;
			dp[i] = 1;
		}
		else if(line[i-1] == '1'){
			dpmin[i] = INF;
			dp[i] = 0;
		}
		else{
			int ansmin = INF + 1;
			int ans = 0;
			
			for(int j = 0; j < k; j++){
				if(!(i + jumps[j] > n)){
					ansmin = min(ansmin,dpmin[i + jumps[j]]);
					ans = (ans + dp[i + jumps[j]]) % MOD; 
				}
				else
					ans += 0;
			}
			dpmin[i] = ansmin + 1;
			dp[i] = ans;
		}
	}
}

int main(){
	scanf("%d%d",&n,&k);
	cin >> line;
	
	for(int i = 0; i < k; i++){
		int j;
		scanf("%d",&j);
		jumps.push_back(j);
	}
	
	solve(n);
	
	if(dpmin[1] >= INF)
		printf("-1 ");
	else
		printf("%d ",dpmin[1]);
		
	printf("%d\n",dp[1] % MOD);
	
}
