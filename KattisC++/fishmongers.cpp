#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector< pair<long long, long long> > vpll;
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
  
  ll fish,fishers,size,fishbuy,monkg,moneycounter,fishcounter,temp;
  vpll money;
  vll fishsizes;
  ll total = 0;
  
  cin >> fish;
  cin >> fishers;
  
  for(int x=0; x<fish; x++)
  {
  	  cin >> size;
  	  fishsizes.push_back(size);
  }
  
  for(int y=0; y<fishers; y++)
  {
  	  cin >> fishbuy;
  	  cin >> monkg;
	  money.push_back( make_pair(monkg,fishbuy));
  }
  
  sort(fishsizes.begin(),fishsizes.end());
  sort(money.begin(),money.end());
  moneycounter = money.size()-1;
  fishcounter = fishsizes.size()-1;

  while(moneycounter > -1 && fishcounter > -1)
  {
  	temp = 0;
  	for(int b=0; b<money[moneycounter].second; b++)
  	{
  	  	 temp += fishsizes.at(fishcounter);
  	  	 fishcounter--;
  	  	 
  	  	 if(fishcounter == -1)
  	  	   break;
	}
	total += (money[moneycounter].first * temp);
	moneycounter--;
  }

  cout << total << endl;
  
  return 0;
}
