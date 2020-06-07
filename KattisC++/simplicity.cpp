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
  int letters [26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; 
  
  cin >> word;
    
  for(int x=0; x<word.length(); x++)
  {
 	  letters[word.at(x)-97]++;
  }
  sort(letters,letters+26);

  cout << (word.length()-(letters[24]+letters[25]));
  return 0;
}
