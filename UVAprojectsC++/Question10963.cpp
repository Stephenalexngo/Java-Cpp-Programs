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
  i tester,times,i,j,num;

  while(cin >> tester)
  {
  	 for(int y=0; y<tester; y++)
  	 {
  	 	bool same = true;
  	 	num = 0;
  	 	cin >> times;
  	 	for(int x=0; x<times; x++)
  	 	{
  	 		cin >> i;
  	 		cin >> j;
  	 		
  	 		if(x==0)
  	 			num = abs(i-j);
  	 		else
			{
				if(num != abs(i-j))
					same = false;
			}   	
		}
		
		if(same)
		   cout << "yes" << endl;
		else
		   cout << "no" << endl;
		
		if(y+1 != tester)
		   cout << endl;
  	 }
  }
    	
  return 0;
}
