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
  
  i test,mph,time,curtime,total;
  
  while(cin >> test, test != -1)
  {
  		total = 0;
  		curtime = -1;
  		
  		while(test--)
	  	{
	  		cin >> mph >> time; 
	  	 	if(curtime == -1)
	  	 	    total += time * mph;
			else
				total = total + ((time - curtime) * mph); 
			curtime = time;
	  	}
	  	
	  	printf("%d miles\n",total);
  }
  
  return 0;
}
