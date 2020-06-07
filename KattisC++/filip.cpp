#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vdb;
typedef vector<long> vl;
typedef vector<long long> vll;
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

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i firstnum,secondnum,revfirst=0,revsecond=0;
  
  cin >> firstnum >> secondnum;
  
  for(int x=0; x<3; x++)
  {
  	 revfirst = revfirst*10 + (firstnum%10);
  	 firstnum = (firstnum - (firstnum%10)) / 10;
  	 
  	 revsecond = revsecond*10 + (secondnum%10);
  	 secondnum = (secondnum - (secondnum%10)) / 10;
  }
  
  if(revfirst > revsecond)
  	cout << revfirst;
  else
  	cout << revsecond;	
  
  return 0;
}
