#include <bits/stdc++.h>

using namespace std;
  
typedef long long ll;

int main() 
{ 
    ll num, longnum,total=0;
    vector<ll> arr;
    
    for(int x=0; x<10; x++){
    	cin >> num;
    	arr.push_back(num);
	}
	
	int x=1;
	while(true){
		if(x == 10){
			if(arr[0] > 0)
				x = 0;
			else
				break;
		}
			
		if(arr[x] > 0){
			total++;
			arr[x]--;
		}
		
		x++;	
	}
	
	cout << total;
	
    return 0; 
} 

