#include <bits/stdc++.h> 

using namespace std; 

typedef long long ll;

double cosh(double x){
	return (exp(x) + exp(-1*x)) / 2;
}

double sinh(double x){
	return (exp(x) - exp(-1*x)) / 2;
}

double currsag(double midpoint, double d, double s){
	return midpoint*cosh(d/(2*midpoint)) - midpoint - s;
}

double findA(double lo, double hi, int distance, int sag){
	double midpoint = lo + (hi-lo) / 2;
	double currA = currsag(midpoint, distance, sag);
	
	if(abs(currA) < 0.000001)
		return midpoint;
		
	if(currA > 0)
		return findA(midpoint,hi,distance,sag);
	else
		return findA(lo,midpoint,distance,sag);
}

int main() 
{ 
	int d,s;
	double a, l;
	
	cin >> d >> s;
	
	a = findA(0,1000000000,d,s);
    
    cout << fixed << setprecision(9) << 2*a * sinh(d/(2*a));
    
    return 0; 
} 
