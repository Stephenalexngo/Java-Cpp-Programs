#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

int main() {
	int n, counter=0, looper=0;
	
	scanf("%d",&n);
	
	for(int x=0; x<31; x++){
		if(pow(2,x) > n) {
			looper = x-1;
			break;
		}
		else if(pow(2,x) == n) {
			looper = x;
			break;
		}
	}
	
	while(n != 0) {
		if(n%2!=0) {
			counter+=pow(2,looper);	
		}
		
		looper--;
		n/=2;
	}
	
	cout << counter;
	
	return 0;
}
