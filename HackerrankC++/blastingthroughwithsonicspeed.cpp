#include <bits/stdc++.h>

#define MOD 1000000007LL

using namespace std;

typedef long long ll;

ll dp[2001][2001];
bool tiles[2001];
int n, a, b, c, k;

ll solve(ll pos, ll e){
	
	bool isSlippery = tiles[pos];
	ll num;
	
	if(dp[pos][e] > -1)
		return dp[pos][e];
	
	if(pos == n)
		num = 0;
	else if(e == 0)
		num =  a + solve(pos + 1, e + 1);
	else if(isSlippery)
		num = min(a + solve(pos + 1, e + 1), c + solve(pos, e - 1));
	else
		num = min(a + solve(pos + 1, e + 1), b + solve(pos + 1, e - 1));
		
	return dp[pos][e] = num;
} 
            
int main() {
    scanf("%d%d%d%d%d",&n,&a,&b,&c,&k);
    memset(tiles,false,sizeof(tiles));
	memset(dp,-1,sizeof(dp));
	
    for(int i = 0; i < k; i++) {
    	int slip;
        scanf("%d",&slip);
        tiles[slip] = true;
    }
    printf("%lld\n",solve(1,0));
}
