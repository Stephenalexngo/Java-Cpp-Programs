#include <bits/stdc++.h> 
using namespace std; 
  
typedef long long ll;

#define MOD 1000000007

ll dp[5000][5000]; 
  
ll findCnt(ll* arr, ll n, ll c) 
{ 
    for(int x=0; x<n+1; x++){
        for(int y=0; y<c+1; y++){
            if(x == 0 || y == 0)
                dp[x][y] = 1;
            else if(arr[x-1] > y)
                dp[x][y] = dp[x-1][y] % MOD;
            else
                dp[x][y] = (dp[x-1][y] + dp[x-1][y-arr[x-1]]) % MOD;
        }
    }
    
    return dp[n][c];
} 
  
int main() 
{ 
    ll n, c, ws[500000];
    cin >> n >> c;
    for(ll i = 0; i < n; i++) {
        cin >> ws[i];
    }
    
    cout << findCnt(ws, n, c); 
  
    return 0; 
} 
