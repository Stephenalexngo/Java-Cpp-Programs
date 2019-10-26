#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i tester,sum;
  
  while(cin >> tester, tester)
  {	  
  	  sum = 0;
  	  
  	  for(int x=1; x<tester+1; x++)
  	  {
  	  	 sum += (x*x);
	  }
	  
	  cout << sum << endl;
  }
  
  return 0;
}
