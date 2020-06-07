#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
	int test, nums;
	vector<int> vi;
	
	cin >> test;
	
	for(int x=0; x<test; x++){
		cin >> nums;
		vi.push_back(nums);
	}
	
	sort(vi.begin(), vi.end()); 

	int maxi = 0;
	
	for(int y=test-1; y>-1; y--){
		maxi = maxi < vi.at(y)-y ? maxi = vi.at(y)-y : maxi;
	}
	
	cout << (maxi+test+1) << endl;
	
	return 0;
}
