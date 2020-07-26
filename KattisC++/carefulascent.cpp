#include <bits/stdc++.h> 

using namespace std; 

typedef long long ll;

int main() 
{ 
    double x_axis, y_axis, shields, lbshield, upshield, multiplier;
    
    cin >> x_axis >> y_axis >> shields;
    
    for(int x=0; x<shields; x++){
    	cin >> lbshield >> upshield >> multiplier;
    	
    	y_axis -= upshield - lbshield; // remove the shield height first to determine the interfere rate
    	y_axis += (upshield - lbshield)*multiplier; // added the interferion of the shield to the jet
	}
    
    cout << fixed << setprecision(11) << x_axis/y_axis;
    
    return 0; 
} 
