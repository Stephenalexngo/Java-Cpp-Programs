#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
	int h,w,n,curl,length, curh=1, annoyed=0;
	
	cin >> h >> w >> n;
	curl = w;
	for(int x=0; x<n; x++){
		scanf("%d", &length);
		if(annoyed == 0){
			if(curh <= h){
				if(curl-length > 0)
					curl-=length;
				else if(curl-length == 0){
					curh++;
					curl = w;
				}
				else
					annoyed = 1;
			}
		}
	}
	
	if(annoyed)
		cout << "NO";
	else
		cout << "YES";
	
	return 0;
}
