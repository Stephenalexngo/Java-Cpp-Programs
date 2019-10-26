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
  char input[1000000];
  i count,posi,posj,casenum=1,numcmp;
  
  while(cin >> input)
  {
  	 cin >> count;
  	 printf("Case %d:\n",casenum);
  	 
  	 for(int x=0; x<count; x++)
  	 {
  	 	cin >> posi;
  	 	cin >> posj;
  	 	bool same = true;
  	 	numcmp = -1;
  	 	
  	 	if(posi < posj)
		{
			for(int y=posi; y<=posj; y++)
			{
				if(numcmp == -1)
				  numcmp = input[y];
				else
				{
				  	if(numcmp != input[y])
				  	{
				  		same = false;
				  		break;
				    }
				}  
			}
		}
		else
		{
			for(int y=posj; y<=posi; y++)
			{
				if(numcmp == -1)
				  numcmp = input[y];
				else
				{
				  	if(numcmp != input[y])
				  	{
				  		same = false;
				  		break;
				    }
				}  
			}
		}
		
		if(same)
		 cout << "Yes" << endl;
		else
		 cout << "No" << endl; 
	 }
	 casenum++;
  }
    	
  return 0;
}
