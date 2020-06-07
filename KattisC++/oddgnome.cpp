#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef stack<long long> sll;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i n,g,gnomes,kingpos,temp;
  
  cin >> n;

  while(n--)
  {
  	 cin >> g;
  	 kingpos=1;
  	 temp=0;
  	 bool found=false;
  	 
	 while(g--)
  	 {
  	 	cin >> gnomes;
  	 	
  	 	if(!found)
  	 	{
  	 		if(temp==0)
	  	 	  temp = gnomes;
			else
			{
			   kingpos++;
			   if(temp+1 != gnomes)
			   	 found = true;
			   else
			     temp = gnomes;	 
			}
		}	
	 }
	 
	 printf("%d\n",kingpos);	
  }
     
  return 0;
}
