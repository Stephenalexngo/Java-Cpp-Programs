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
		
   st word;
   db whitenum=0, low=0, up=0, other=0; 
   
   cin >> word;
   
   for(int x=0; x<word.length(); x++)
   {
   	  if(word[x] == '_')
   	  	whitenum++;
   	  else if(word[x] >= 'a' && word[x] <= 'z')
		low++;
	  else if(word[x] >= 'A' && word[x] <= 'Z')	
	  	up++;
	  else
	  	other++;	  	
   }
   
   printf("%.15lf\n%.15lf\n%.15lf\n%.15lf",whitenum/word.length(),low/word.length(),up/word.length(),other/word.length());

   return 0;
} 
