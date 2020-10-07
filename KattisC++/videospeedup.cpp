#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    double n, p, k, ans=0.0, m=1.0, cur=0.0;
    vector<double> arr;
    
    cin >> n >> p >> k;
    
    for(int x=0; x<n; x++){
    	double num;
		cin >> num;
    	arr.push_back(num);
	}
	
	for(double x=0; x<n; x++){
		ans += m * (arr[x]-cur);
		cur = arr[x];
		m += p / 100.0;
	}
	
	ans += m * (k-cur); 
    cout << fixed << setprecision(6) << ans;
    return 0;
}


