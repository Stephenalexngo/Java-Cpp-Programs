// Group Members - Karl King, Stephen Alex Ngo, Lenard Balwin To

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define PI 3.14159265

string balancedSums(vector<int> arr) {
    int first = accumulate(arr.begin(), arr.begin()+1, 0);
    int second = accumulate(arr.begin()+2, arr.end(), 0);
    
    for(int x=0; x<arr.size(); x++){
        if(x == 0){
            if(0 == accumulate(arr.begin()+1, arr.end(), 0))
                return "YES";
        }
        else if(x+1 == arr.size()){
            if(0 == accumulate(arr.begin(), arr.end()-1, 0))
                return "YES";
        }
        else{
            if(first == second)
                return "YES";
            
            first+=arr[x];
            second-=arr[x+1];
        }
    }
    
    return "NO";
}

int main() { 
    
    int test, n, num;
    vector<int> arr;
    
    cin >> test;
    
    for(int x=0; x<test; x++){
    	cin >> n;
    	vector<int> arr;
    	
    	for(int y=0; y<n; y++){
    		cin >> num;
    		
    		arr.push_back(num);
		}
		
		if(n == 1)
			cout << "YES" << endl;
		else
			cout << balancedSums(arr) << endl;
	}
    
    return 0; 
} 
