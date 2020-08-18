#include <bits/stdc++.h>

using namespace std;
  
typedef long long ll;

int main() 
{ 
    ll n, k, nums, total=0, curr=0;
    priority_queue<ll, vector<ll>, greater<ll>> arr;
	cin >> n >> k;

	for(ll i = 0; i < n; i++) {
		cin >> nums;
        arr.push(nums);
        curr += nums;
	}

    if(n < k){
        cout << curr;
    }
    else{
        while(arr.size() != 1){
            ll temp = 0;
            for(int x=0; x<k && !arr.empty(); x++){
                temp += arr.top();
                arr.pop();
            }
            arr.push(temp);
            total += temp;
        }

        cout << total << endl;
    }

    return 0; 
} 

