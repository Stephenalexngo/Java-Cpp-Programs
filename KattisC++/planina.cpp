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
  
  i iterator, cur = 2, multiplier = 1;
  
  cin >> iterator;
  
  for(int x=0; x<iterator; x++)
  {
  	 cur += multiplier;
  	 multiplier *= 2;
  }	   	  	
  
  cout << cur*cur;
  
  return 0;
}
