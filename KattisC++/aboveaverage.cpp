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
		
   i test; 
   db per, tot, ave, grade, nums;
   
   cin >> test;
   
   while(test--)
   {
   	  cin >> nums;
   	  ave = 0;
   	  per = 0;
   	  tot = 0;
   	  vi allgrades;
   	  for(int x=0; x<nums; x++)
   	  {
   	  	 cin >> grade;
   	  	 allgrades.push_back(grade);
   	  	 ave += grade;
	  }
	  per = 100 / nums;
	  ave /= nums;
	  
	   for(int x=0; x<allgrades.size(); x++)
	   {
	   	  if(allgrades[x] > ave)
	   	  	tot += per;
	   }
	   
	   printf("%.3lf%\n",tot);
   }

   return 0;
} 
