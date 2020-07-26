#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
   	int test, invalid;
   	string sentence;
   	
   	cin >> test;
	getline(cin,sentence);
	
   	while(test--){
   		bool validation[26] = {false};
   		invalid = 0;
   		
   		getline(cin,sentence);
   		
   		for(int x=0; x<sentence.length(); x++){
   			if(tolower(sentence.at(x)) >= 'a' && tolower(sentence.at(x)) <= 'z'){
   				validation[tolower(sentence.at(x))-97] = true;
			}
		}
		
		for(int x=0; x<26; x++){
			if(!validation[x]){
				if(invalid == 0){
					cout << "missing ";
				}
				
				cout << (char)(x+97);
				invalid = 1;
			}
		}
		
		if(invalid == 0)
			cout << "pangram";
		
		cout << endl;
	}
	
   	return 0;
}
