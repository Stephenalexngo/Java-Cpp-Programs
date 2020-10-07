#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

typedef long long ll;

ll dp[500000 + 2];

ll result(ll num, ll a, ll b){
    
    dp[0] = a;
    dp[1] = b;

    if(dp[num])
        return dp[num];
    
    if(num == 0)
        return a;
    else if(num == 1)
        return b;
    else{
        for(int x=2; x<=num; x++){
            dp[x] = min(((a+dp[x-1])%MOD), ((b+dp[x-2])%MOD));
        }
        
        return dp[num];
    }
}

int main() 
{ 
    ll test, num, A, B;

    scanf("%lld %lld %lld", &test, &A, &B);

    for(int x=0; x<test; x++){
        scanf("%lld", &num);
        printf("%lld\n", result(num,A,B));
    }

    return 0; 
} 
