#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef multiset<int, greater<int> > mri;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;
typedef float f;

i len, numtck, arrtcks[25], temptcks[25], total=0;

int solve(int curtotal, int cur)
{
	
	if(len == curtotal)
		return curtotal;
	
	if(curtotal > len)
		return 	
}

int main ()
{
  // freopen("out.txt","wt",stdout);

  while(cin >> len >> numtck)
  {
  	 for(int x=0; x<numtck; x++)
  	 {
  	 	scanf("%d",&arrtcks[x]);
	 }
	 
	 int ans = solve(0,0);
	 
  }
  
  return 0;
}
