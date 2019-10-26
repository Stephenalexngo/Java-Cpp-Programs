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

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  ll input,sum;
  
  while(cin >> input, input > -1)
  {
  	sum = 0;
  	
  	 for(int x=1; x<input+1; x++)
  	 {
  	 	sum += x;
	 }
	 
	 cout << sum+1 << endl;
  }
  
  return 0;
}
