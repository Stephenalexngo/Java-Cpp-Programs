#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll ans=0, n, m, test=1, query;

    while(scanf("%lld", &n) == 1 && n){
        printf("Case %lld:\n", test++);
        ll arr[1000];
        
        for( int x = 0; x < n; x++){
            scanf("%lld", &arr[x]);
        }
            
        scanf("%d", &m);

        for(int i = 0; i<m; i++){
            scanf("%lld", &query);
            ans = arr[0] + arr[1];

            for(int x = 0; x < n; x++){
                for(int y = x+1; y < n; y++){
                    ll cur = arr[x] + arr[y];
                    if(abs(ans - query) > abs(cur - query)) 
                        ans = cur;
                }
            }
            
            printf("Closest sum to %lld is %lld.\n", query, ans);
        }
    }
    
    return 0;
}
