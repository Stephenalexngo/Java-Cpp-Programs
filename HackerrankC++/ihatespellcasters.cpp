#include <bits/stdc++.h>

using namespace std;
  
typedef long long ll;

ll calculate(ll a, ll mid){
    return a*sin(mid) + a*mid;
}

int main() 
{ 
    ll a,q,t,temp,mid;
    
    scanf("%lld %lld", &a, &q);
    
    for(int x=0; x<q; x++){
    	scanf("%lld", &t);
    	
    	if(a != 0){
    		ll lo = 0, hi = int(10e9);
    	
	    	while(lo+1 < hi){
	    		mid = (lo+hi) / 2;
	    		
	    		temp = calculate(a, mid);
	    		
	    		if(temp + 1 > t)
	    			hi = mid;
	    		else
	    			lo = mid;
			}
			
			printf("%lld\n", lo);
		}
	}
	
	if(a == 0){
		printf("Pat is the Best Tunnel Master!");
	}
	
    return 0; 
} 

