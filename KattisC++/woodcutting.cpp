#include <bits/stdc++.h>

using namespace std;

int main() {
  	int test, customers;
  	
  	cin >> test;
  	
  	for(int x=0; x<test; x++){
  		vector<int> arr;
  		
  		cin >> customers;
  		
  		for(int y=0; y<customers; y++){
  			int woodsize, totsize=0;
  			cin >> woodsize;
			
			for(int i=0; i<woodsize; i++){
				int size;
				cin >> size;
				totsize += size;
			}
			
			arr.push_back(totsize);	
		}
		
		sort(arr.begin(), arr.end());
		
		int sum = 0;
		long long totsum=0;
		
		for(int z=0; z<customers; z++){
			sum += arr[z];
			totsum += sum;
		}
		
		double average = totsum/ ((double)arr.size());
		
		cout << fixed << setprecision(10) << average << endl;
	}
	
	return 0;
}
