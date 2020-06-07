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
  
  i anum,bnum,cnum,dnum,total=0,curgroup=1;	  	  	
  	  	  	
  for(int x=1; x<=5; x++)
  {
  	 cin >> anum >> bnum >> cnum >> dnum;
  	 
  	 if(total < anum + bnum + cnum + dnum)
  	 {
  	 	total = anum + bnum + cnum + dnum;
  	 	curgroup = x;
	 }
  }
  
  cout << curgroup << " " << total << endl;
  return 0;
}
