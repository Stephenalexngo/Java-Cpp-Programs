#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

int main() {
	int n, d;
	int lineup[105];
	
	cin >> n;
	
	for(int x = 1; x < n; x++){
		cin >> d;
		
		lineup[d] = x+1;  
	}
	
	for(int y=-1; y<n-1; y++){
		if(y==-1)
			cout << "1 ";
		else{
			cout << lineup[y] << " ";
		}	
	}
	
	return 0;
}
