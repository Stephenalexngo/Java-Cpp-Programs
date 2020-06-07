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
  
  i A,B,C,jumps;
  
  cin >> A;
  cin >> B;
  cin >> C;
  
  if(C - B > B - A)
  	 jumps = C - B;
  else
     jumps = B - A;
     
  cout << jumps-1 << endl;
  return 0;
}
