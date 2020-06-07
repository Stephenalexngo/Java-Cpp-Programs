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
	
   i first,second,third;
   
   cin >> first >> second >> third;
   
    if(first + second == third)
   	  printf("%d+%d=%d",first,second,third);  		   	
    else if(first - second == third)
      printf("%d-%d=%d",first,second,third); 
	else if(first * second == third)
      printf("%d*%d=%d",first,second,third);
	else if(first / second == third)
      printf("%d/%d=%d",first,second,third);
	else if(second + third == first)
      printf("%d=%d+%d",first,second,third);
	else if(second - third == first)
      printf("%d=%d-%d",first,second,third);
	else if(second * third == first)
      printf("%d=%d*%d",first,second,third);
	else if(second / third == first)
      printf("%d=%d/%d",first,second,third);
	            		   	
   return 0;
} 
