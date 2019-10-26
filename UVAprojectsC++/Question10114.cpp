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
  
  i months, monthtopay, lesser, counter;
  db paying, carworth, dep[101], deprec, owe, currdep, monthlypay; 
  
  while(1)
  {
  	  cin >> months, 
  	  cin >> paying;
	  cin >> carworth;	  
	  cin >> lesser;
	  counter=0;
	  
	  if(months < 0)
	  	break;
	  
	  for(int y=0; y<101; y++)
	  {
	  	 dep[y] = -1;
	  }
	  
	  for(int x=0; x<lesser; x++)
	  {
	  	 cin >> monthtopay;
	  	 cin >> deprec;
	  	 
	  	 dep[monthtopay] = deprec;
	  }
	  
	  owe = carworth;
	  monthlypay = carworth / months;
	  carworth = (carworth+paying)*(1.0-dep[0]);
	  currdep = dep[0];
	  
	  while(carworth < owe)
	  {
	  	 counter++;
	  	 if(dep[counter] != -1)
	  	 	currdep = dep[counter];
	  	 	
	  	 carworth *= (1-currdep);
	  	 owe -= monthlypay;
	  }
	  
	  if(counter == 1)
	  	printf("%d month\n",counter);
	  else
	  	printf("%d months\n",counter);	  	
  }
  return 0;
}
