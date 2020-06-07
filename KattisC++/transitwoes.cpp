#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
	int s, t, n, b, c;
	
	cin >> s >> t >> n;
	
	int busstop[n+1];
	
	for(int x=0; x<n+1; x++){
		cin >> busstop[x];
	}
	
	for(int x=0; x<n; x++){
		cin >> b;
		s += b;
	}
	
	for(int x=0; x<n; x++){
		cin >> c;
		
		if(c > busstop[x])
			s += c;
		else
			s += busstop[x];
	}
	
	s += busstop[n];
	
	if(s > t)
		cout << "no" << endl;
	else
		cout << "yes" << endl;	
	
	return 0;
}
