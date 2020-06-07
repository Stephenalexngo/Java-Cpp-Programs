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
   i x = 0;
   
   getline(cin,word);
   
   while(x<word.length())
   {
   	  if(word[x] == 'a' || word[x] == 'e' || word[x] == 'i' || word[x] == 'o' || word[x] == 'u')
   	  {
   	  	cout << word[x];
   	  	x+=3;
	  }
	  else
	  {
	  	cout << word[x];
	  	x++;
	  }
   }
  		   	
   return 0;
} 
