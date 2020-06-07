#include<bits/stdc++.h>
using namespace std;

int main() {

	int test, counter=0;
	map<string,string> awards;
	string country, name;
	string cou[15], na[15];
	
	while(cin >> test)
	{
		while(test--){
			cin >> country >> name;
		
			if(awards.size() != 12){
				if(awards.empty() || !awards.count(country)){
					awards.insert(pair<string,string>(country,name));
					cou[counter] = country;
					na[counter] = name;
					counter++;
				}
			}
		}
		
		for (int x=0; x<12; x++){
			cout << cou[x] << " " << na[x] << endl;
    	}
	}
	
	return 0;
}
