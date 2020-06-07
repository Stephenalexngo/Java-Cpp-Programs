#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef multiset<int, greater<int> > mri;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;
typedef float f;

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i takcor, category, coursenum, availcat, mincat, numcat, taken, done;
  
  while(cin >> takcor, takcor != 0)
  {
  	cin >> category;
  	 vi fredcor;
  	 
  	 while(takcor--)
  	 {
  	 	cin >> coursenum;
  	 	fredcor.push_back(coursenum);
	 }
	 
	 done = 0;
	 while(category--)
	 {
	 	cin >> availcat >> mincat;
	 	taken = 0;
	 	
		while(availcat--)
		{
		 	cin >> numcat;
			 
			if(done == 0)
			{
				for(int x=0; x<fredcor.size(); x++)
				{
					if(fredcor.at(x) == numcat)
					{
						taken++;
						break;
					}
				}
			}
		}
		
		if(taken < mincat)
			done = 1;
	 }
	 
	 if(done == 1)
	 	cout << "no" << endl;
	 else
	 	cout << "yes" << endl;	
  } 
  
  return 0;
}
