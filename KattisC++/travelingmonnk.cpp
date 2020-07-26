#include <bits/stdc++.h> 

using namespace std; 

typedef long long ll;

double currPos(vector< pair<double,double> > arr, double mid){
	double pos = 0;
	
	for(int x=0; x<arr.size(); x++){
		if(mid == 0)
			break;
		
		if(mid - arr[x].second >= 0){
			pos += arr[x].first;
			mid -= arr[x].second;
		}
		else{
			pos += ((arr[x].first / arr[x].second) * mid);
			mid = 0;
		}
	}
	
	return pos;
}

int main() 
{ 
    int numAS, numDS;
    double elevAS, elevDS, timeAS, timeDS, maxheight = 0;
    vector< pair<double,double> > ascent, descent; 
    
    cin >> numAS >> numDS;
    
    for(int x=0; x<numAS; x++){
        cin >> elevAS >> timeAS;
        maxheight += elevAS;
        ascent.push_back( make_pair(elevAS, timeAS) );
    }
    
    for(int x=0; x<numDS; x++){
        cin >> elevDS >> timeDS;
        descent.push_back( make_pair(elevDS, timeDS) );
    }
    
    double hi = 1000000000 , lo = 0;
    double midpoint, temp_AS, temp_DS;
    double lowest = 1000000;
    
    while(fabs(lo-hi) > 0.000000001){
        midpoint = lo + (hi - lo) /2;
        
        temp_AS = currPos(ascent, midpoint);
        temp_DS = maxheight - currPos(descent, midpoint);
        
        if(abs(temp_AS - temp_DS) < 0.00001){
        	if(midpoint < lowest)
                lowest = midpoint;
		}
        
		if(temp_AS < temp_DS)
            lo = midpoint;
        else
            hi = midpoint;
    }
    
    cout << fixed << setprecision(6) << lowest;
    
    return 0; 
} 
