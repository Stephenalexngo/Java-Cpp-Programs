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
	
   i maxpeople ,test, num, tot=0, count=0;
   st action;
   
   cin >> maxpeople >> test;
   
   while(test--)
   {
   	  cin >> action >> num;
   	  
   	  if(action == "enter")
   	  {
   	  	if(tot+num > maxpeople)
   	  		count++;
   	  	else
			tot += num;	
	  }
	  else
	  	tot-=num;
   }
   
   cout << count;
			   	
   return 0;
} 
