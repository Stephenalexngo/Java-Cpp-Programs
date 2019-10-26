#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i tester;
  st card,ans;
  
  while(cin >> tester)
  {
  	  for(int y=0; y<tester; y++)
  	  {
  	  	 for(int x=0; x<52; x++)
  	  	 {
  	  	 	cin >> card;
  	  	 
  	  		if(x == 32)
  	  	 	  ans = card;
		 }
  	  	 
  	  	 cout << "Case " << (y+1) << ": " << ans << endl;
	  }
  }
 
  return 0;
}
