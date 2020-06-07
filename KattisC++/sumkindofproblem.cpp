#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

int main() {
	int test, k, num;
	
	cin >> test;
	
	while(test--) {
		cin >> k >> num;
		int posint=0, oddint=0, evenint=0, poscount=0, oddcount=0, evencount=0, curr=1;
		
		while(poscount != num || oddcount != num || evencount != num) {
			if(poscount != num) {
				posint+=curr;
				poscount++;
			}				
				
			if(oddcount != num && curr%2 != 0) {
				oddint+=curr;
				oddcount++;
			}
				
			if(evencount != num && curr%2 == 0) {
				evenint+=curr;
				evencount++;
			}
			
			curr++;
		}
		
		printf("%d %d %d %d\n",k,posint,oddint,evenint);
	}
	
	return 0;
}
