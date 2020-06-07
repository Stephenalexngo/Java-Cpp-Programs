#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vdb;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef stack<long long> sll;
typedef stack<long> sl;
typedef stack<char> sc;
typedef stack<int> si;
typedef stack<double> sdb;
typedef stack<string> ss;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

#define PI 3.14159265
char letter[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  st word,lefthalf,righthalf,rotleft,rotright,newword;
  i wordlen,numleft=0,numright=0;
  
  cin >> word;
  
  lefthalf = word.substr(0,word.length()/2);
  righthalf = word.substr(word.length()/2,word.length()-1);
  
  for(int x=0; x<lefthalf.size(); x++)
  {
  	 numleft += (int)lefthalf[x] - 65;
  	 numright += (int)righthalf[x] - 65;
  }
  
  for(int x=0; x<lefthalf.size(); x++)
  {
  	 rotleft += letter[(((int)lefthalf[x] - 65 + numleft)%26)];
  	 rotright += letter[(((int)righthalf[x] - 65 + numright)%26)];
  }
  
  for(int x=0; x<righthalf.size(); x++)
  {
  	 i firstleft = (int)rotleft[x] - 65;
  	 i firstright = (int)rotright[x] - 65;
  	 newword += letter[(firstleft+firstright)%26];
  }
  
  cout << newword;
  
  return 0;
}
