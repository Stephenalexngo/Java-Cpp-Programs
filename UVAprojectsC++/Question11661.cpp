#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef string st;
typedef int i;
typedef double db;

int main ()
{
  // freopen("out.txt","wt",stdout);
  long len,finaldis,lastd,lastr;
  st point;
  
  while(scanf("%d",&len), len != 0)
  {
  	 cin >> point;
  	 finaldis = 2000001;
  	 lastd = -1;
  	 lastr = -1;
  	 
	 for(int x=0; x<len; x++)
	 {
		if(point[x] == 'Z')
		{
			finaldis = 0;
			break;
		}     
		else if(point[x] == 'D')
		{
			lastd = x;
			if(lastr != -1)
			  finaldis = min(finaldis,abs(lastd-lastr));
 
		}
		else if(point[x] == 'R')
		{
			lastr = x;
			if(lastd != -1)
			  finaldis = min(finaldis,abs(lastr-lastd));
		}
	 }
	 
	 cout << finaldis << endl;
  }
    	
  return 0;
}
