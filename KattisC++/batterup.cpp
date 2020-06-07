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
		
   i test, number;
   db total=0, runs=0;		
		
   cin >> test;
   
   while(test--)
   {
   	  cin >> number;
   	  if(number != -1)
   	  {
   	  	runs++;
		total += number; 
	  }
   }
   
   printf("%.11lf",total/runs);
   return 0;
} 
