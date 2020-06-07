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
  
  st word;
  vc letter;
  
  cin >> word;
  
  for(int x=0; x<word.length(); x++)
  {
  	 if((int)word[x] > 64 && (int)word[x] < 91)
  	 	letter.push_back(word[x]);
  }
  
  for(int y=0; y<letter.size(); y++)
  {
  	 cout << letter[y];
  }
  
  return 0;
}
