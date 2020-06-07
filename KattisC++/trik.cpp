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
  
  st trick;
  i curpos=1;
  
  cin >> trick;
  
  for(int x=0; x<trick.length(); x++)
  {
 	if(trick[x] == 'A')
 	{
 		if(curpos == 1)
 			curpos = 2;
 		else if(curpos == 2)
		 	curpos = 1;	
	}
	else if(trick[x] == 'B')
	{
		if(curpos == 2)
			curpos = 3;
		else if(curpos == 3)
			curpos = 2;	
	}
	else
	{
		if(curpos == 3)
			curpos = 1;
		else if(curpos == 1)
			curpos = 3;	
	}
  }
  
  cout << curpos;
  
  return 0;
}
