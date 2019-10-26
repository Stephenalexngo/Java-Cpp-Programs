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
  i tester,times,num,mile,juice;
  vi sec;

  while(cin >> tester)
  {
  	 for(int y=0; y<tester; y++)
  	 {
  	 	sec.clear();
  	 	mile = 0;
  	 	juice = 0;
  	 	cin >> times;
	 
	 	for(int x=0; x<times; x++)
	 	{
	 		cin >> num;
	 		sec.push_back(num);
	 	}
	 	
	 	for(int z=0; z<sec.size(); z++)
	 	{
	 		if(sec.at(z) < 30)
	 		{
	 			mile = mile + 10;
			}
	 		else
	 		{
	 			mile = mile + ((sec.at(z)/30+1)*10);
			}
			
			if(sec.at(z) < 60)
	 		{
	 			juice = juice + 15;
			}
	 		else
	 		{
	 			juice = juice + ((sec.at(z)/60+1)*15);
			}
		}
		
		if(mile == juice)
		   printf("Case %d: Mile Juice %d\n",(y+1),mile);
		else if(mile < juice)
		   printf("Case %d: Mile %d\n",(y+1),mile);
		else
		   printf("Case %d: Juice %d\n",(y+1),juice);      
	 }
  }
    	
  return 0;
}
