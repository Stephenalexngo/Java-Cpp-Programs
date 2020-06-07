#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
	int r,n, num;
	int arr[101] = {};
	
	cin >> r >> n;
	
	for(int x=0; x<n; x++){
		cin >> num;
		arr[num]++; 
	}
	
	if(n == r)
		cout << "too late";
	else{
		for(int x=1; x<100; x++){
			if(arr[x] == 0){
				cout << x;
				break;
			}
		}
	}
	
	return 0;
}
