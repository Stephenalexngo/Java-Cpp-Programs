#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
	int test, row ,col;
	
	cin >> test;
	
	for(int i=0; i<test; i++){
		cin >> row >> col;
		char arr[row][col];
		
		for(int x=0; x<row; x++){
			for(int y=0; y<col; y++){
				cin >> arr[x][y];
			}
		}
		
		printf("Test %d\n",i+1);
		
		for(int x=row-1; x>-1; x--){
			for(int y=col-1; y>-1; y--){
				cout << arr[x][y];
			}
			cout << endl;
		}
	}
	
	return 0;
}
