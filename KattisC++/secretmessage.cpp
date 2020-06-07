#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

int main() {
	
	int test,gridsize;
	string word;
	
	cin >> test;
	
	while(test--) {
		cin >> word;
		
		for(int x=1; x<=100; x++) {
			if(x*x >= word.length()) {
				gridsize = x;
				break;
			}
		}
		
		char arr[gridsize][gridsize];
		int len = 0;
		
		for(int x=0; x<gridsize; x++) {
			for(int y=0; y<gridsize; y++) {
				if(len != word.length()) {
					arr[x][y] = word.at(len);
					len++;
				}
				else 
					arr[x][y] = '*';
			}
		}
		
		for(int x=0; x<gridsize; x++) {
			for(int y=gridsize-1; y>-1; y--) {
				if(arr[y][x] != '*')
					cout << arr[y][x];
			}
		}
		
		cout << endl;
	}
	
	return 0;
}
