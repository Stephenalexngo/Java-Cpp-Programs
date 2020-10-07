#include <bits/stdc++.h>

using namespace std;

int n, q, ans;
long long kx, ky, x, y, e, people[100000][2];
vector<long long> arr;
vector<long long>::iterator upB;

int main() {
	cin >> n >> kx >> ky;
	for(int i = 0; i < n; i++) {
      	// using fscanf to prevent TLE
		fscanf(stdin,"%lld%lld",&people[i][0],&people[i][1]);
        arr.push_back((abs(kx-people[i][0]))+(abs(ky-people[i][1])));
	}
    sort(arr.begin(),arr.end());
	cin >> q;
	for(int i = 0; i < q; i++) {
		fscanf(stdin,"%lld",&e);
        
		upB = upper_bound(arr.begin(), arr.end(), e);
      	ans = upB-arr.begin();  
      	
		fprintf(stdout,"%d\n",ans);
	}
}
