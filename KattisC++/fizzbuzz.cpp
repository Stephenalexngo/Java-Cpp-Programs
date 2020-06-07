#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vdb;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef pair<int,int> ii;
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

#define PI 3.14159265

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i X,Y,N;
  
  cin >> X >> Y >> N;
  
  for(int x=1; x<=N; x++)
  {
  	 if(x % X == 0 && x % Y == 0)
  	 	cout << "FizzBuzz" << endl;
  	 else if(x % X == 0)
	   	cout << "Fizz" << endl;
	 else if(x % Y == 0)
	 	cout << "Buzz" << endl;
	 else
	 	cout << x << endl;	 	   	
  }
  
  return 0;
}
