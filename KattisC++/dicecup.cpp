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
  
  i firstnum, secondnum;
  
  cin >> firstnum >> secondnum;
  
  if(firstnum == secondnum)
  	cout << firstnum+1 << endl;
  else
  {
  	if(firstnum > secondnum)
  	{
  		for(int x=secondnum+1; x<firstnum+2; x++)
  		{
  			printf("%d\n",x);
		}
	}
	else
	{
		for(int x=firstnum+1; x<secondnum+2; x++)
  		{
  			printf("%d\n",x);
		}
	}
  }
  
  return 0;
}
