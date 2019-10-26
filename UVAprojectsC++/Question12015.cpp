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
  i tester,finalnum,num;	
  st url;
  vs links;

  while(cin >> tester)
  {
  	 for(int x=0; x<tester; x++)
  	 {
  	 	printf("Case #%d:\n",x+1);
  	 	for(int y=0; y<10; y++)
  	 	{
  	 		cin >> url;
  	 		cin >> num;
  	 		
  	 		if(y==0)
  	 		{
  	 			links.push_back(url);
  	 			finalnum = num;
			}
			else
			{
				if(num > finalnum)
				{
					links.clear();
					links.push_back(url);
					finalnum = num;
				}
				else if(num == finalnum)
					links.push_back(url);
			}
		}
		
		for(int z=0; z<links.size(); z++)
		{
			cout << links.at(z) << endl;
		}
	 }
  }
    	
  return 0;
}
