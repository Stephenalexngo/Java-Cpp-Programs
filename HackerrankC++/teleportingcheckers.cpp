#include<bits/stdc++.h> 

using namespace std; 

typedef long long ll;  
  
ll dp[502][502][22];
ll r, c, p, k;
bool isPortal[502][502];
pair<ll,ll> portals[502][502];

ll solve(ll rstart, ll cstart, ll k) 
{ 
	if((rstart >= 1 && rstart <= r) && (cstart >= 1 && cstart <= c)){
		if(dp[rstart][cstart][k] > -1)
        	return dp[rstart][cstart][k];

	    if(rstart == r)
	        return 1;
	    else if(isPortal[rstart][cstart] && k > 0){
	    	return dp[rstart][cstart][k] = (solve(portals[rstart][cstart].first, portals[rstart][cstart].second, k-1) 
								+ (solve(rstart+1,cstart+1,k)) 
								+ (solve(rstart+1,cstart-1,k))) %1000000007;	
		}
	    else
	        return dp[rstart][cstart][k] = (solve(rstart+1,cstart+1,k)+ solve(rstart+1,cstart-1,k)) %1000000007;
	}
	else
		return 0;
} 

int main() 
{ 
	ll rstart, cstart, rsrc, csrc, rdest, cdest;
    scanf("%lld%lld%lld%lld%lld%lld",&r,&c,&p,&k,&rstart,&cstart);
    memset(isPortal, false, sizeof(isPortal));
    memset(dp, -1, sizeof(dp));
    
    for(int i = 0; i < p; i++){
      	scanf("%lld%lld%lld%lld",&rsrc,&csrc,&rdest,&cdest);
      	isPortal[rsrc][csrc] = true;
      	isPortal[rdest][cdest] = true;
      	portals[rsrc][csrc] = make_pair(rdest,cdest);
      	portals[rdest][cdest] = make_pair(rsrc,csrc);
    }

    cout << solve(rstart,cstart,k) << endl;
    
//    for(int i = 0; i < r; i++){
//    	for(int x=0; x<c; x++){
//    		cout << "HEHEHE = " << dp[i][x] << " ";
//		}
//		
//		cout << endl;
//    }
    
 	return 0;   
}
