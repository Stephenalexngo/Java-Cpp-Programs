#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

int NOD(ll total)
{
	i count=0;
	
	for(int z=1; z<=sqrt(total); z++)
	{
		if(total % z == 0)
		{
			if(sqrt(total) == z)
				count++;
			else
				count+=2;	
		}
	}
	
	return count;
}

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  ll total,A;
  i tester,B,setter=1;
  vi set;
  
  while(setter <= 1000000)
  {
  	 set.push_back(setter);
  	 setter = setter + NOD(setter);
  }
  
  while(cin >> tester)
  {
  	 for(int x=0; x<tester; x++)
  	 {
  	 	cin >> A;
  	 	cin >> B;

		cout << "Case " << (x+1) << ": " << distance(lower_bound(set.begin(), set.end(), A), upper_bound(set.begin(), set.end(), B)) << endl;
	 }
  }

  return 0;
}
