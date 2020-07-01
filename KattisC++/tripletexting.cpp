#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
	string word, firstword, secondword, thirdword;
	
	getline(cin, word);
	
	firstword = word.substr(0,word.length()/3);
	secondword = word.substr(word.length()/3,word.length()/3);
	thirdword = word.substr(word.length()/3*2,word.length()/3*3);
	
	if(firstword == secondword || firstword == thirdword)
		printf("%s",firstword.c_str());
	else
		printf("%s",secondword.c_str());
	
	return 0;
}
