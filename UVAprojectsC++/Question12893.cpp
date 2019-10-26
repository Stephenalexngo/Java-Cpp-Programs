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

int num[11];

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  ll n;
  i cas;
  
  num[0] = 0;
  
  for(int x=1;x<=9;x++) 
  {
  	num[x]=num[x/2]+(x%2);
  }
  
   scanf("%d",&cas);
	
   while(cas--)
   {
	 cin >> n;
	 i count = 0;
	 
	 while(n > 9)
	 {
	 	if(n % 2 != 0)
	 		count++;
	 	
		n /= 2; 	
	 }
	 
	 cout << (num[n] + count) << endl;	
   }
 
  return 0;
}
