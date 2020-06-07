#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vdb;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef pair<int,int> ii;
typedef stack<long long> sll;
typedef stack<long> sl;
typedef stack<char> sc;
typedef stack<int> si;
typedef stack<double> sdb;
typedef stack<string> ss;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

#define PI 3.14159265

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i test, numcity, count;
  st cityname;
  
  cin >> test;
  
  while(test--)
  {
  	 cin >> numcity;
  	 vs dir;
  	 count = 0;
  	 
  	 while(numcity--)
  	 {
  	 	cin >> cityname;
  	 	
  	 	if(dir.size() == 0)
  	 	{
  	 		dir.push_back(cityname);
  	 		count++;
		}
  	 	else
		{
			i equal = 0;
			
			for(int x=0; x<dir.size(); x++)
			{
				if(dir[x] == cityname)
				{
					equal = 1;
					break;
				}
			}
			
			if(equal == 0)
			{
				dir.push_back(cityname);
				count++;
			}
		}   	
	 }
	 
	 cout << count << endl;
  }
  
  return 0;
}
