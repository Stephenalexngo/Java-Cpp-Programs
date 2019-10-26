#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i t;
  ll n;
    
  scanf("%d", &t);
  while(t--) 
  {
     scanf("%lld", &n);
     printf("%lld\n", (long long)floor(sqrt( 2.0 * n + 0.25 ) + 0.5) - 1);
  }
 
  return 0;
}
