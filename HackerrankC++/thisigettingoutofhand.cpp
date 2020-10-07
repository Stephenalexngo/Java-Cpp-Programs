#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007LL
#define INF 1000000000

typedef long long ll;

ll f[20000 + 2];
ll g[20000 + 2];


void result(ll A, ll B, ll C, ll D){

	f[0] = A;
	g[0] = B;
	f[1] = (C*f[0]) % MOD;
	g[1] = (C*g[0]) % MOD;
	
	for(int n=2; n<20002; n++){
		f[n] = (((C*f[n-1]) % MOD) + ((D*g[n-2]) % MOD)) % MOD;
		g[n] = (((C*g[n-1]) % MOD) + ((D*f[n-2]) % MOD)) % MOD;
	}
}

int main(){
	
	ll A, B, C, D, Q, num;

    scanf("%lld %lld %lld %lld %lld", &A, &B, &C, &D, &Q);

	result(A,B,C,D);

    for(int x=0; x<Q; x++){
        scanf("%lld", &num);
        printf("%lld %lld\n", f[num], g[num]);
    }

	return 0;
}
