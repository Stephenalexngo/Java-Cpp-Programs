#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
   	int test, num, tot, firstnum, secondnum;
	
	cin >> test;
	
	for(int x=0; x<test; x++){
		tot = 0;
		firstnum = -1;
		
		while(cin >> num, num != 0){
			if(firstnum == -1)
				firstnum = num;
			else{
				if(firstnum*2 < num){
					tot += num - (firstnum*2);
				}
				
				firstnum = num;
			}	
		}
		
		if(x+1 == test)
			cout << tot;
		else
			cout << tot << endl;
	}
	
   	return 0;
}
