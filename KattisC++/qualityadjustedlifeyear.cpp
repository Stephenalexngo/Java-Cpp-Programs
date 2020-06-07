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
  
  i N;
  db q,y,total=0.00;
  
  cin >> N;
  
  while(N--)
  {
  	 cin >> q >> y;
  	 
  	 total += (q*y);
  }
  
  printf("%.3lf",total);
  
  return 0;
}
