#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vdb;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef stack<long long> sll;
typedef stack<long> sl;
typedef stack<char> sc;
typedef stack<int> si;
typedef stack<double> sdb;
typedef stack<string> ss;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i test, notad, ad, cost;
  
  cin >> test;
  
  while(test--)
  {
  	cin >> notad >> ad >> cost;
  	
  	if(notad < (ad-cost))
  		cout << "advertise" << endl;
  	else if(notad > (ad-cost))
	  	cout << "do not advertise" << endl;
	else
		cout << "does not matter" << endl;	  	
  }
  
  return 0;
}
