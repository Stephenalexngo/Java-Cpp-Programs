#include <bits/stdc++.h>

using namespace std;

int main() {
  	int items, price;
	long long miniprice;
	vector<long long> arr;

	cin >> items >> miniprice;

	for(int x=0; x<items; x++){
		cin >> price;
		arr.push_back(price);
	}

	sort(arr.begin(), arr.end());

	if(items == 1)
		cout << 1;
	else{
		long long cur, tot=1;

		for(int x=1; x<items; x++){
			if(arr[x] + arr[x-1] <= miniprice)
				tot++;
			else
				break;
		}

		cout << tot;
	}
	
	return 0;
}
