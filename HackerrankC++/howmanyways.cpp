#include<bits/stdc++.h> 

using namespace std; 

typedef long long ll;  
  
ll dp[5000][5000];
  
ll binomialCoeff(ll n, ll k) 
{ 
    if(dp[n][k])
        return dp[n][k];

    if(k == 0)
        return 1;
    else if(n < k)
        return 0;
    else
        dp[n][k] = ((binomialCoeff(n-1,k-1)%1000000007) + (binomialCoeff(n-1,k)%1000000007)) %1000000007;
  
    return dp[n][k]; 
} 

int main() 
{ 
    ll q, n, r;
    cin >> q;
    for(int i = 0; i < q; i++) {
        scanf("%lld %lld",&n,&r);
        printf("%lld\n",binomialCoeff(n, r));
    }
}
