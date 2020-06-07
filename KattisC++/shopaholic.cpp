#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long> vl;
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
  
  ll item,price,total;
  vll prices;
  
  cin >> item;
  
  for(int x=0; x<item; x++)
  {
  	 cin >> price;
  	 prices.push_back(price);
  }
  
  total = 0;
  sort(prices.begin(),prices.end());
  for(int y=item-3; y>-1; y-=3)
  {
  	 total += prices.at(y);
  }	 
  
  cout << total << endl;
 
  return 0;
}
