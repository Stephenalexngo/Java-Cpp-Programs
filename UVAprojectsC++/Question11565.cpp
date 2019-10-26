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

  bool sol; 
  i test,A,B,C;
  
  while(cin >> test)
  {
  	 while(test--)
  	 {
  	 	cin >> A >> B >> C;
  	 	sol = false;
  	 	
  	 	for(int x=-100; x<=100; x++)
  	 	{
  	 		for(int y=-100; y<=100; y++)
			{
				for(int z=-100; z<=100; z++)
				{
					if(x != y && y != z && z != x &&
						x + y + z == A && x * y * z == B && x * x + y * y + z * z == C){
							if(!sol)
								printf("%d %d %d\n",x,y,z);
							sol = true;
							break;	
						}
				}
				
				if(sol)
					break;
			}
			
			if(sol)
				break;   	
		}
		
		if(!sol)
			printf("No solution.\n");
	 }
  }
  
  return 0;
}
