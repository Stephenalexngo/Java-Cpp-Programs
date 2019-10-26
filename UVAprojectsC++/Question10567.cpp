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
  
  st given, input;
  i tester,counter,itr,firstcan;
  
  while(cin >> given)
  {	  
  	  cin >> tester;
  	  
  	  for(int x=0; x<tester; x++)
  	  {
  	  	  cin >> input;
  	  	  counter = 0;
  	  	  itr = 0;
  	  	  firstcan = -1;
  	  	  
  	  	  while((itr != input.length()) && (counter != given.length()))
  	  	  {	
  	  	  	  if(firstcan == -1)
  	  	  	  {
  	  	  	  	 if(input.at(itr) == given.at(counter))
  	  	  	  	 {
  	  	  	  	 	firstcan = counter;
  	  	  	  	 	itr++;
				 }
				 
				 counter++;
			  }
			  else
			  {
			  	 if(input.at(itr) == given.at(counter))
			  	 	itr++;
				 
				 counter++;
			  }
		  }
		  
		  if(itr == input.length())
		  	printf("Matched %d %d\n",firstcan,counter-1);
		  else	
			printf("Not matched\n");
	  }
  }
  
  return 0;
}
