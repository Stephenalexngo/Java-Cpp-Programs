#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
	int arrprobs[26] = {};
	ll tottime = 0;
	int mins, correct=0;
	char letter;
	string state;
	
	while(cin >> mins, mins != -1){
		cin >> letter >> state;
		
		if(state == "right"){
			tottime += mins;
			tottime += (arrprobs[(int)letter - 65] * 20);
			correct++;
		}
		else{
			arrprobs[(int)letter - 65]++;
		}
	}
	
	cout << correct << " "<< tottime << endl;
	return 0;
}
