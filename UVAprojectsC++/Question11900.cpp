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
  
  i tester,n,P,Q,weightegg,total,count;
  
  while(cin >> tester)
  {
  	  for(int y=0; y<tester; y++)
	  {
		  cin >> n >> P >> Q;
  	  	  bool contin = true;
	  	  total = 0;
	  	  count = 0;
	  	  
	  	  for(int x=1; x<n+1; x++)
	  	  {
	  	  	 cin >> weightegg;
	  	  	 
	  	  	 if(weightegg+total > Q || x > P)
	  	  	 	contin = false;	
	  	  	 
	  	  	 if(contin)
	  	  	 {
	  	  	 	total += weightegg;
	  	  	 	count++;
			 }
		  }
		  
		  printf("Case %d: %d\n", y+1, count);	
	  }	
  }
 
  return 0;
}
