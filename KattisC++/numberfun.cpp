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
	
   db test, first, second, tot;
   
   cin >> test;
   
   while(test--)
   {
   	   cin >> first >> second >> tot;
   
	   if(first > second)
	   {
	   	  if(first+second == tot || first-second == tot || first*second == tot || first/second == tot)
	   	  	cout << "Possible" << endl;
	   	  else
			cout << "Impossible" << endl;	
	   }
	   else
	   {
	   	  if(second+first == tot || second-first == tot || second*first == tot || second/first == tot)
	   	  	cout << "Possible" << endl;
	   	  else
			cout << "Impossible" << endl;
	   }
   }
   	  
   return 0;
} 
