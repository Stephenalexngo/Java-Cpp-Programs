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
  
  ll l,d,n,bird,add=0,counter=0,vectorcounter=0; 
  vll pos;
  
  cin >> l;
  cin >> d;
  cin >> n;
  
  for(int x=0; x<n; x++)
  {
  	 cin >> bird;
  	 pos.push_back(bird);
  }
  
  sort(pos.begin(),pos.end());
  if(n==0)
  {
  	 while(add + d <= l - 6)
  	 {
  	 	if(add == 0)
  	 	{
  	 		add += 6;
  	 		counter++;
		}
		else
		{
			add += d;
			counter++;
		}
	 }
  }
  else
  {
  	 while(add + d <= l - 6)
  	 {
  	 	if(add == 0)
  	 	{
  	 		if(add+6 <= pos.at(vectorcounter)-d)
  	 			counter++;
			add += 6;
		}
		else
		{
			if(vectorcounter != n)
			{
				if(add+d <= pos.at(vectorcounter)-d)
				{
					add += d;
					counter++;
				}
				else
				{
					add = pos.at(vectorcounter);
					vectorcounter++;
				}
			}
			else
			{
				add += d;
			    counter++;
			}
		}
	 }
  }
  
  cout << counter << endl;
  return 0;
}
