#include <bits/stdc++.h>

using namespace std;
  
typedef long long ll;

ll dptable[300000 + 2], atable[50000];
ll sum = 0;

ll result(ll num){
    if(dptable[num])
        return dptable[num];
        
    if(num == 0)
        return dptable[0] = atable[0];
    else{
        dptable[num] = ((atable[num]%1000000007) + (result(num-1)%1000000007)) % 1000000007;
        
        if(num > 1){
            sum = (sum + dptable[num-2]) % 1000000007;
            dptable[num] = (dptable[num] + sum) % 1000000007;
        }
    }
        
    return dptable[num];   
}

int main() 
{ 
    ll q, n,query,num;

    scanf("%lld %lld", &q, &n);

    for(int x=0; x<n; x++){
        scanf("%lld", &num);
        atable[x] = num;
    }

    for(int x=0; x<q; x++){
        scanf("%lld", &query);
        printf("%lld\n", result(query));
    }

    return 0; 
} 
#include <bits/stdc++.h>

using namespace std;
  
typedef long long ll;

ll dptable[300000 + 2], atable[50000];
ll sum = 0;

ll result(ll num){
    if(dptable[num])
        return dptable[num];
        
    if(num == 0)
        return dptable[0] = atable[0];
    else{
        dptable[num] = ((atable[num]%1000000007) + (result(num-1)%1000000007)) % 1000000007;
        
        if(num > 1){
            sum = (sum + dptable[num-2]) % 1000000007;
            dptable[num] = (dptable[num] + sum) % 1000000007;
        }
    }
        
    return dptable[num];   
}

int main() 
{ 
    ll q, n,query,num;

    scanf("%lld %lld", &q, &n);

    for(int x=0; x<n; x++){
        scanf("%lld", &num);
        atable[x] = num;
    }

    for(int x=0; x<q; x++){
        scanf("%lld", &query);
        printf("%lld\n", result(query));
    }

    return 0; 
} 

