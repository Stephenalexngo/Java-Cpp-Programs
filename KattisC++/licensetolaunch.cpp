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
	
   i test, count=0;
   ll num, mini;
   
   cin >> test;
   
   for(int x=0; x<test; x++)
   {
   	  cin >> num;
   	  
   	  if(x==0)
   	  	mini = num;
   	  else if(mini > num)
	  {
	  	mini = num;
	  	count = x;
	  }	 	
   }
   
   cout << count;
   return 0;
} 
