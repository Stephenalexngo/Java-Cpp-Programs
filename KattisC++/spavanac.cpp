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
  
  i hour, min;
  
  cin >> hour >> min;
  
  if(min >= 45)
  	 cout << hour << " " << (min - 45);
  else
  {
  	 min = 60+min-45;
  	 
  	 if(hour == 0)
  	 	cout << "23 " << min;
	 else
	 	cout << (hour-1) << " " << min;	    
  }
  	  	  	
  return 0;
}
