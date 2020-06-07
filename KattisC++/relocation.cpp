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
	
   ll apptrack, moves, num, A, B;
   
   cin >> apptrack >> moves;
   
   ll loc[apptrack];
   
   for(int x=0; x<apptrack; x++)
   {
   	 cin >> num;
   	 loc[x] = num;
   }
   
   for(int y=0; y<moves; y++)
   {
   	 cin >> num >> A >> B;
   	 
   	 if(num == 1)
   	 	loc[A-1] = B;
	 else
	 	cout << abs(loc[A-1]-loc[B-1]) << endl;
   }
   
   return 0;
} 
