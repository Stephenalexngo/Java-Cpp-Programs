// Group Members - Karl King, Stephen Alex Ngo, Lenard Balwin To

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define PI 3.14159265

int main() { 
    
    int test, order, prep;
    vector< pair<int,int> > arr;
  	
    cin >> test;
    
    for(int x=0; x<test; x++){
    	cin >> order >> prep;
    	
    	arr.push_back(make_pair((order+prep),x+1));
	}
	
	sort(arr.begin(),arr.end());
	
	for(int x=0; x<test; x++){
    	
    	if(x == 0)
    		cout << arr[x].second;
    	else
    		cout << " " << arr[x].second;
	}
    
    return 0; 
} 
