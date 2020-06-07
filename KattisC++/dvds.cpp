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
  
  ll test,dvd,a,counter,size,step;
  vll instance;
  
  cin >> test;
  
  for(int x=0; x<test; x++)
  {
  	  cin >> dvd;
  	  counter = 1;
  	  step = 0;
  	  
  	  for(int y=0; y<dvd; y++)
  	  {
  	  	 cin >> a;
  	     instance.push_back(a);	
	  }
	  
	  for(int z=0; z<instance.size(); z++)
	  {
	  	  if(counter != instance.at(z))
	  	  	 step++;	  	
		  else
		     counter++;
	  }	 
	  
	  instance.clear();
      cout << step << endl;
  }
 
  return 0;
}
