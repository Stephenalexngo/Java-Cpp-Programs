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
  
  i n,m,count=0,a;
  l task,time;
  vll alltasks,alltimes;
  
  cin >> n;
  cin >> m;
  a = m-1;
  
  for(int x=0; x<n; x++)
  {
  	 cin >> task;
  	 alltasks.push_back(task);
  }
  
  for(int y=0; y<m; y++)
  {
  	 cin >> time;
  	 alltimes.push_back(time);
  }
  
  sort(alltasks.begin(), alltasks.end());
  sort(alltimes.begin(), alltimes.end());
  
  for(int z=n-1; z>-1; z--)
  {
  	 if(a > -1)
  	 {
  	 	if(alltimes.at(a) >= alltasks.at(z))
  		{
  		 	count++;
  		 	a--;
		} 
     }
     else
     	break;
  }
  
  cout << count << endl;
  return 0;
}
