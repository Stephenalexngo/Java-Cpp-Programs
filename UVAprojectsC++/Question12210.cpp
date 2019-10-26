#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i B,S,young,ageB,ageS,caser=1;
  
  while(cin >> B >> S, B != 0 || S != 0)
  {
  	  young = 0;
  	  for(int x=0; x<B; x++)
  	  {
  	  	 cin >> ageB;
  	  	 
  	  	 if(young == 0 || young > ageB)
  	  	 	young = ageB;	
	  }
	  
	  for(int y=0; y<S; y++)
	  {
	  	 cin >> ageS;
	  }
	  
	  if(B > S)
	  	printf("Case %d: %d %d\n",caser,(B-S),young);
	  else
	  	printf("Case %d: 0\n",caser);	
	  caser++;	
  }
 
  return 0;
}
