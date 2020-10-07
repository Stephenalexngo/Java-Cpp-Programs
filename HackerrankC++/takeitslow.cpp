#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007LL
#define INF 1000000000

typedef long long ll;

ll dp[500000 + 2];

void result(ll A, ll N){

	for(int x=0; x<200002; x++){
		if(x < N)
			dp[x] = A;
		else
			dp[x] = (dp[x-N] + dp[x-N+1]) % MOD;
	}
}

int main(){
	
	ll A, N, Q, num;

    scanf("%lld %lld %lld", &A, &N, &Q);

	result(A,N);

    for(int x=0; x<Q; x++){
        scanf("%lld", &num);
        printf("%lld\n", dp[num]);
    }

	return 0;
}
