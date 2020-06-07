#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
	string word;
	vector<int> numbers;
	
	for(int x=1; x<6; x++){
		cin >> word;
		
		size_t found = word.find("FBI");
		
		if(found != string::npos)
			numbers.push_back(x);
	}
	
	int have = 1;
	
	for(int x=0; x<numbers.size(); x++){
		have = 0;
		
		if(x == 0)
			cout << numbers.at(x);
		else
			cout << " " << numbers.at(x);
	}	
	
	if(have == 1){
		cout << "HE GOT AWAY!";
	}
	
	return 0;
}
