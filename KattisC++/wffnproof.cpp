#include <bits/stdc++.h>

using namespace std;

int main() {
  	string word;
  	
  	while(cin >> word, word != "0"){
  		string upper = "", lower = "";
  		int n=0;
  		
  		for(int x=0; x<word.length(); x++){
  			if(word.at(x) == 'N')
			  	n++;
			else if(isupper(word.at(x)))
				upper += word.at(x);
			else
				lower += word.at(x);	
		}
		
		if(lower.length() == 0)
			cout << "no WFF possible" << endl;
		else{
			while(n--){
				cout << "N";
			}
			
			for(int j=0, i=1; i < lower.length() && j <upper.length(); i++, j++){
				putchar(upper.at(j));
				putchar(lower.at(i));
			}
			putchar(lower.at(0));
			puts("");
		}
	}
	
	return 0;
}
