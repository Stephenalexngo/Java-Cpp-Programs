#include <bits/stdc++.h>

using namespace std;

long long solve(long long e, long long t, long long s){
  	long long res = 1;
    
    e = e % s;
    
    if(e == 0)
        return 0;
    
    while(t > 0){
        if(t % 2 != 0)
            res = (res*e) % s;
        
        t = t>>1;
        e = (e*e) % s;
    }
    
    return res;
}

int main() {
  	long long e, t;
	cin >> e >> t;
	cout << solve(e,t,10000000) << endl;
}