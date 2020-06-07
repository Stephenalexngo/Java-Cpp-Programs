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
  
  i test, num;
  
  cin >> test;
  
  while(test--)
  {
  	 cin >> num;
  	 
  	 if(num % 2 == 0)
  	 	printf("%d is even\n",num);
  	 else
	   	printf("%d is odd\n",num);	
  }
  
  return 0;
}
