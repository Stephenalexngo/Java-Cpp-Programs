#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void process(vector<string>& arr, int maxlength){
	
	sort(arr.begin(), arr.end()); 
	
	for(int x=0; x<arr.size(); x++){
		string space = "";
		reverse(arr.at(x).begin(),arr.at(x).end());
		if(arr.at(x).length() < maxlength){
			for(int y=0; y<maxlength-arr.at(x).length(); y++){
				space += " ";
			} 
		}
		
		arr.at(x) = space + arr.at(x);
	}
	
	for(int x=0; x<arr.size(); x++){
		cout << arr.at(x) << endl;
	}
}

int main(){
	
    // freopen("out.txt","wt",stdout);
	
   	string word;
    vector<string> arr;
    int maxlength=0;
    
    while(getline(cin, word)) {
        if(word == "") {
            process(arr,maxlength);

            cout << endl;
            arr.clear();
            continue;
        }

        reverse(word.begin(),word.end());
		
		arr.push_back(word);
		
		if(maxlength < word.length())
			maxlength = word.length();
    }
    process(arr,maxlength);

   	return 0;
}

// github solution
//
//#include <algorithm>
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//void process(vector<string>& v) {
//    // Find the max length for each string
//    int maxlen = 0;
//    for(auto i : v) {
//        if(i.length() > maxlen) {
//            maxlen = i.length();
//        }
//    }
//
//    // Reverse each string, sort, flip them back
//    for(auto& i : v) {
//        reverse(i.begin(), i.end());
//    }
//    sort(v.begin(), v.end());
//    for(auto& i : v) {
//        reverse(i.begin(), i.end());
//    }
//
//    // Pad all strings with spaces
//    for(auto& i : v) {
//        string temp;
//        temp.resize(maxlen - i.length(), ' ');
//        temp += i;
//        swap(i, temp);
//    }
//
//    // Print the strings
//    for(auto i : v) {
//        cout << i << endl;
//    }
//}
//
//int main() {
//    string s;
//    vector<string> v;
//    while(getline(cin, s)) {
//        if(s == "") {
//            process(v);
//
//            cout << endl;
//            v.clear();
//            continue;
//        }
//
//        v.push_back(s);
//    }
//    process(v);
//}
