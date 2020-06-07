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
	
   i test, nums, number;
   
   cin >> test;
   
   for(int y=0; y<test; y++)
   {
   	  cin >> nums;
   	  vi numms;
   	  
   	  while(nums--)
   	  {
   	  	 cin >> number;
   	  	 
   	  	 if(numms.size() == 0)
   	  	 	numms.push_back(number);
   	  	 else
		 {
		 	i equal = 0;
		 	for(int x=0; x<numms.size(); x++)
		 	{
		 		if(numms[x] == number)
		 		{
		 			numms.erase(numms.begin()+x);
		 			equal = 1;
		 			break;
				}	
			}
			
			if(equal == 0)
				numms.push_back(number);
		 }	
	  }
	  
	  printf("Case #%d: %d\n",y+1,numms[0]);
   } 
   	  
   return 0;
} 
