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
  
  i nums, w, h, l, number;
  
  cin >> nums >> w >> h;
  
  l = sqrt((w*w)+(h*h));
  while(nums--)
  {
  	 cin >> number;
	   
	 if(number <= l)
	 	cout << "DA" << endl;
	 else
	 	cout << "NE" << endl;	    
  }
  	  	  	
  return 0;
}
