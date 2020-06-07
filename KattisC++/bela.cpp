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
	
   i numhands, total=0;
   st card;
   c suit;
   
   cin >> numhands >> suit;
   
   for(int x=0; x<numhands*4; x++)
   {
   	 cin >> card;
   	 
   	 if(card[0] == 'J')
   	 {
   	 	if(card[1] == suit)
   	 		total+=20;
   	 	else
			total+=2;	
	 }
   	 else if(card[0] == '9' && card[1] == suit)
	 	total+=14;
	 else if(card[0] == 'A')
	 	total+=11;
	 else if(card[0] == 'K')
	 	total+=4;
	 else if(card[0] == 'Q')
	 	total+=3;
	 else if(card[0] == 'T')
	 	total+=10;	 	 	 	 	 	
   }
   
   cout << total;
   
   return 0;
} 
