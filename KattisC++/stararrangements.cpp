#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
	int s;
	
	cin >> s;
	
	printf("%d:\n", s);
	
	for(int x=2; x<=(s+1)/2; x++){
		if(s%(x*2-1) == x || s%(x*2-1) == 0)
			printf("%d,%d\n",x,x-1);
		
		if(s%x == 0)
			printf("%d,%d\n",x,x);
	}
	
	return 0;
}
