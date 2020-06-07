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
	
   i test, num=0, ok=1;
   st input;
   
   cin >> test;
   
   for(int x=0; x<test; x++)
   {
   	  cin >> input;
   	  stringstream geek(input); 
   	  geek >> num;
   	  
   	  if(input != "mumble")
   	  {
   	  	 if(num != x+1)
   	  	 	ok=0;
	  }
   }
   
   if(ok)
   	cout << "makes sense";
   else
   	cout << "something is fishy";	
   	   	
   return 0;
} 
