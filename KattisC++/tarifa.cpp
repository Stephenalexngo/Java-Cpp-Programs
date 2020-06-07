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
  
  i bandwidth,nummonths,usage,total=0,temp=0;
  
  cin >> bandwidth;
  cin >> nummonths;
  
  while(nummonths--)
  {
  	 cin >> usage;
  	 
  	 total += bandwidth;
  	 total = total-usage;
  }
  
  printf("%d\n",total+bandwidth);
     
  return 0;
}
