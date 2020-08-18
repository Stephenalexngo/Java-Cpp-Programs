#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define PI 3.14159265

int main() 
{ 
   // freopen("out.txt","wt",stdout);
	
   int test, N;
   
   while(cin >> test){
   		for(int x=0; x<test; x++){
   			cin >> N;
			   
			cout << ((N * (N - 1)) / 2) << endl;
		}
   }

   return 0;
} 
