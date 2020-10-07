#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int kayaks[13] = {0};
    int N, S, R;
    vector<int> arr;
    
    cin >> N >> S >> R;
    
    int total = S;
    for(int x=0; x<S; x++){
    	int dam;
		cin >> dam;
		kayaks[dam] = 1; 
	}
	
	for(int x=0; x<R; x++){
		int res;
		cin >> res;
		arr.push_back(res);
	}
    
    sort(arr.begin(),arr.end());
    
    for(int x=0; x<R; x++){
		if(kayaks[arr[x]-1]){
			total--;
			kayaks[arr[x]-1]=0;
		}
		else if(kayaks[arr[x]+1]){
			total--;
			kayaks[arr[x]+1]=0;
		}
	}
    
    cout << total;
    
    return 0;
}
