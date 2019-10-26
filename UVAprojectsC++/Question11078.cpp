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

  i test,numstu,scores,maxx,total;

  while(cin >> test)
  {
  	 while(test--)
  	 {
  	 	cin >> numstu;
  	 	maxx=-160000;
  	 	total=-160000;
  	 	i childd = 0;
  	 	
  	 	while(numstu--)
  	 	{
  	 		cin >> scores;
  	 		
  	 		if(maxx==-160000)
  	 			maxx=scores;
  	 		else if(childd == 0)
  	 		{
  	 			if(maxx > scores)
  	 			{
  	 				childd = 1;
  	 				total = maxx - scores;
				}
				else
				{
					if(total < maxx - scores)
						total = maxx - scores;
						
					if(maxx < scores)
						maxx = scores;	
				}
			}
			else
			{
				if(maxx > scores)
				{
					if(total < maxx-scores)
						total = maxx-scores;
					
				}
				else
					maxx=scores;
			}	
		}
		
		cout << total << endl;
	 }
  }
  
  return 0;
}
