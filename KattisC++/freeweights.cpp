#include <bits/stdc++.h> 

using namespace std; 

typedef long long ll;

bool is_paired(vector<ll> rack, ll mid){
	ll curr = -1;
	
	for(int x=0; x<rack.size(); x++){
		
		if(rack[x] > mid){
			if(curr == -1){
				curr = rack[x];
			}
			else{
				if(curr != rack[x])
					return false;
					
				curr = -1;
			}
		}
	}
	
	return true;
}

int main() 
{ 
	ll numpair, fnum, snum, hi=2000000000, lo=0, mini = 20000000000;
	vector<ll> firstrack, secondrack;
	set<ll, greater<ll> > unique;
	
	cin >> numpair;
	
	for(int x=0; x<numpair; x++){
		cin >> fnum;
		unique.insert(fnum);
		firstrack.push_back(fnum);
	}
	
	for(int x=0; x<numpair; x++){
		cin >> snum;
		unique.insert(snum);
		secondrack.push_back(snum);
	}
	
	vector<ll> v(firstrack.size() + secondrack.size()); 
    vector<ll>::iterator it, st; 
  
  	vector<ll> temprack1 = firstrack, temprack2 = secondrack;
  	sort(temprack1.begin(), temprack1.end());
  	sort(temprack2.begin(), temprack2.end());
  	
    it = set_intersection(temprack1.begin(), 
                          temprack1.end(), 
                          temprack2.begin(), 
                          temprack2.end(), 
                          v.begin()); 
  	
	bool done = true;
	
    for (st = v.begin(); st != it; ++st){	
		done = false;
		break;
	}
	
	if(!done){
		for (st = it-1; st != it; ++st){	
			lo = *st;
			break;
		}
	}

	while(lo <= hi){
    	ll mid = (hi+lo) / 2;
    	
    	if(is_paired(firstrack, mid) && is_paired(secondrack, mid)){
    		if(mid < mini)
    			mini = mid;
    		hi = mid - 1;
		}	
		else
			lo = mid + 1;
    }
	
	cout << mini;

    return 0; 
} 
