#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef stack<long long> sll;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  st word;
  i ts=0,cs=0,gs=0,total,extra;
  
  cin >> word;
  
  for(int x=0; x<word.length(); x++)
  {
  	 if(word[x] == 'T')
  	 	ts++;
  	 else if(word[x] == 'C')
	   	cs++;
	 else
	 	gs++;	   	
  }
  
  extra = min(ts,min(cs,gs)) * 7;
  
  total = ((ts*ts)+(cs*cs)+(gs*gs))+ extra;
  	  	  	
  cout << total;	  	  	
  return 0;
}
