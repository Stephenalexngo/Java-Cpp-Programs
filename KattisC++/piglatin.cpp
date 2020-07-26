#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void printWords(string str) 
{ 
    istringstream iss(str);
    string word;
	vector<string> v;
	
    while(iss >> word) {
        v.push_back(word.c_str());
    }
        
    for(int x=0; x<v.size(); x++){
    	if(v.at(x).at(0) == 'a' || v.at(x).at(0) == 'e' || v.at(x).at(0) == 'i' || v.at(x).at(0) == 'o' || v.at(x).at(0) == 'u' || v.at(x).at(0) == 'y'){
    		if(x+1==v.size())
				cout << v.at(x) << "yay";
			else
				cout << v.at(x) << "yay ";
		}
		else{
			if(x+1==v.size()){
				for(int y=0; y<v.at(x).size(); y++){
					if(v.at(x).at(y) == 'a' || v.at(x).at(y) == 'e' || v.at(x).at(y) == 'i' || v.at(x).at(y) == 'o' || v.at(x).at(y) == 'u' || v.at(x).at(y) == 'y'){
						cout << v.at(x).substr(y,v.at(x).length()-1) << v.at(x).substr(0,y) << "ay";
						break;
					}
				}
			}
				
			else{
				for(int y=0; y<v.at(x).size(); y++){
					if(v.at(x).at(y) == 'a' || v.at(x).at(y) == 'e' || v.at(x).at(y) == 'i' || v.at(x).at(y) == 'o' || v.at(x).at(y) == 'u' || v.at(x).at(y) == 'y'){
						cout << v.at(x).substr(y,v.at(x).length()-1) << v.at(x).substr(0,y) << "ay ";
						break;
					}
				}
			}	
		}
	}
} 

int main(){
	
   	string sentence;
   	
   	while(getline(cin,sentence)){
   		printWords(sentence);
			
   		cout << endl;
	}
   	
   	return 0;
}
