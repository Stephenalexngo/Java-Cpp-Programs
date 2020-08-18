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
	
   i test, nums, count=0, lowestnum=-100000000	, tot=0;
	
   cin >> test;
   
   while(test--)
   {
   	  cin >> nums;
   	  
   	  if(nums > lowestnum)
   	  	lowestnum = nums;
   	  
	  if(nums > -1)
	  {
	  	 tot+=nums;
	  	 count++;
	  }	 	
   }
   
   if(count == 0)
   	 printf("%d %d",1,lowestnum);
   else
   	 printf("%d %d",count,tot);			   	
			   	
   return 0;
} 
