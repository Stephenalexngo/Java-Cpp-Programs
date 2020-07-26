#include <bits/stdc++.h> 

using namespace std; 

typedef long long ll;

bool checker(vector< pair<ll,ll> > investments, ll numdays, ll target){
	ll net_profit = 0;
	
	for(int x=0; x<investments.size(); x++){
		ll temp_profit = numdays * investments.at(x).first - investments.at(x).second;
		
		if(temp_profit > 0)
			net_profit += temp_profit;
		if(net_profit >= target)
			return true; 
	}

	return false;
}

int main() 
{ 
	ll n,m,profit,cost;
	vector< pair<ll,ll> > investments;
	
	cin >> n >> m;
	
	for(int x=0; x<n; x++){
		cin >> profit >> cost;
		investments.push_back(make_pair(profit,cost));
	}
	
	ll lo = 0;
	ll hi = 3e9 + 1;
	
	while(lo < hi){
		ll midpoint = lo + (hi-lo) / 2;
		
		if(checker(investments, midpoint, m))
			hi = midpoint;
		else
			lo = midpoint + 1;	
	}
	
	cout << lo;
    
    return 0; 
} 
