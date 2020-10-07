#include <bits/stdc++.h>

using namespace std;
  
typedef long long ll;

// max disjoint interval

bool sorter(const pair<ll, ll>& a, 
               const pair<ll, ll>& b) {
    return a.second < b.second;
}

ll maxRev(vector< pair<ll, ll> > events) 
{ 
    ll total = 1;
  
    int r1 = events[0].second; 
  
    for (int i = 1; i < events.size(); i++) { 
        int l1 = events[i].first; 
        int r2 = events[i].second; 
  
        if (l1 >= r1) { 
            total++; 
            r1 = r2; 
        } 
    } 
    
    return total;
} 

int main() 
{ 
    ll n,c;
	vector< pair<ll,ll> > events;

    cin >> n >> c;
	
    for(ll x=0; x<n; x++){
        ll left, right;
        cin >> left >> right;
		
        events.push_back( make_pair(left,right) );
    }

    sort(events.begin(), events.end(), sorter);
    
    cout << maxRev(events)*c;
    
    return 0; 
} 
