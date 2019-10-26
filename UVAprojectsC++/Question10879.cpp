#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i tester,caser,a,b,c,d,num,y;
  
  while(cin >> tester)
  {
  	 caser = 1;
  	 for(int x=0; x<tester; x++)
	 {
	 	a=1; b=1; c=1; d=1; y=2;
	    cin >> num;
	    
		while(d==1)
		{
			if(a==1)
			{
				if(num%y==0)
				{
					a = y;
					b = num / y;
				}
			}
			else
			{
				if(num%y==0)
				{
					c = y;
					d = num / y;
				}
			}
			y++;
		}
		
		printf("Case #%d: %d = %d * %d = %d * %d\n",caser,num,a,b,c,d); 
		caser++;
	 }		
  }
  
  return 0;
}
