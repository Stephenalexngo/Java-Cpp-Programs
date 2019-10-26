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
  
  i tester,field,count,crow;
  c slot;
  
  while(cin >> tester)
  {	  
  	  for(int x=0; x<tester; x++)
  	  {
  	  	  count = 0;
  	  	  crow = 0;
  	      cin >> field;
		  
		  for(int y=1; y<field+1; y++)
		  {
		      cin >> slot;
		      
			  if(count != 0)
			  {
			  	 count++;
			  	 if(count == 3)
			  	 {
			  	    crow++;
					count=0;	
				 }
			  }
			  else
			  {
			  	 if(slot == '.')
			  	  count++;
			  }
		  }
		  
		  if(count > 0)
			crow++;
			
		  printf("Case %d: %d\n", x+1,crow);		
	  }
  }
  
  return 0;
}
