#include <bits/stdc++.h>

using namespace std;
  
typedef long long ll;

ll dptable[300000 + 2];

ll result(ll num){
    
    if(dptable[num])
        return dptable[num];
    
    if(num < 2)
        return 1;
    else
        dptable[num] = ((result(num-2)%1000000007) + (result(num-3)%1000000007)) % 1000000007;

    return dptable[num];   
}

int main() 
{ 
    ll test, num;

    scanf("%lld", &test);

    for(int x=0; x<test; x++){
        scanf("%lld", &num);
        printf("%lld\n", result(num));
    }

    return 0; 
} 
