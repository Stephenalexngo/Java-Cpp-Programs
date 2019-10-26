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
typedef float f;

bool isPerfectSquare(long double x) 
{   
  long double sr = sqrt(x); 
  return ((sr - floor(sr)) == 0); 
} 

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i test,j;
  
  while(cin >> test)
  {
  	 getc(stdin);
  	 for(int x=0; x<test; x++)
  	 {
  	 	j = 0;
  	 	char good[30000];
  	 	
  	 	char c = ' ';
		while (scanf("%c", &c), c != '\n') {
			if (isalpha(c)) {
				good[j++] = c;
			}
		}

	    good[j] = '\0';
    	int nomagic = 0;
    	for(int y=0; y<j/2+1; y++)
    	{
    		if(good[y] != good[j-y-1])
    		{
    			nomagic = 1;
    			break;
			}
		}
		
		printf("Case #%d:\n",x+1);
		if(nomagic == 1)
			printf("No magic :(\n");
		else
		{
			if (isPerfectSquare(j)) 
			    cout << sqrt(j) << endl;
			else
			    printf("No magic :(\n");
		}
	 }
  }

  return 0;
}
