#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vdb;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef pair<int,int> ii;
typedef stack<long long> sll;
typedef stack<long> sl;
typedef stack<char> sc;
typedef stack<int> si;
typedef stack<double> sdb;
typedef stack<string> ss;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

#define PI 3.14159265

int main() 
{ 
   // freopen("out.txt","wt",stdout);
	
   ll num;
   
   while(cin >> num){
   	    ll total=1;
   	    
   	    for(int x=2; x*x <= num; x++)
   	    {
   	    	if(num % x == 0){
   	    		total += x;
   	    		if(x*x != num)
   	    			total += num/x;
			}	
		}
   
   		if(num == total)
		   	printf("%d perfect\n", num);
		else if(abs(total-num) <= 2)
   			printf("%d almost perfect\n", num);
		else
			printf("%d not perfect\n", num);	   	
   }
   
   return 0;
} 
