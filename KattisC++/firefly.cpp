#include <bits/stdc++.h> 

using namespace std; 

typedef long long ll;

int main() 
{ 
    ll N, H, num;
    vector<ll> arrLB, arrUB;
    vector<ll>::iterator lowB, upB;
    
    cin >> N >> H;
    
    for(ll x=1; x<=N; x++){
    	cin >> num;
    	
    	if(x%2==0)
    		arrUB.push_back(H-num+1);
    	else
    		arrLB.push_back(num);
	}
	
	sort(arrUB.begin(), arrUB.end());
	sort(arrLB.begin(), arrLB.end());
	ll count=0, mini=500000,curr;
	
    for(ll x=1; x<=H; x++){
    	lowB = lower_bound(arrLB.begin(), arrLB.end(), x);
    	upB = upper_bound(arrUB.begin(), arrUB.end(), x);
    	
    	if(mini > (arrLB.end()-lowB)+(upB-arrUB.begin())){
    		mini = (arrLB.end()-lowB)+(upB-arrUB.begin());
    		count = 1;
		}
		else if(mini == (arrLB.end()-lowB)+(upB-arrUB.begin()))
			count++;
	}
	
	cout << mini << " " << count << endl;
    
    return 0; 
} 
