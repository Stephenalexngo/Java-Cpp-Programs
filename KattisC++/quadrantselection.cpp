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
  
  i x,y;
  
  cin >> x >> y;
  
  if(x > 0 && y > 0)
  	cout << "1";
  else if(x < 0 && y > 0)
  	cout << "2";
  else if(x < 0 && y < 0)
  	cout << "3";
  else
  	cout << "4";	   	  	
  
  return 0;
}
