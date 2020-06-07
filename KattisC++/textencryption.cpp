#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vdb;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef pair<int,int> ii;
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

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i n;
  st word;
  
  while(cin >> n, n != 0)
  {
  	 getline(cin,word);
  	 getline(cin,word);
  	 st newword;
  	 
  	 for(int x=0; x<word.length(); x++)
  	 {
  	 	if(word[x] != ' ')
  	 	{
  	 		newword += toupper(word[x]);
		}
	 }
	 
	 i len = newword.length();
	 char cipher[len];
	 i init=0,curint=1;
	 for(int x=0; x<len; x++)
	 {
	 	if(init < len)
	 	{
	 		cipher[init] = newword[x];
	 		init += n;
		}
		else
		{
			init = curint;
			curint++;
			cipher[init] = newword[x];
			init += n;
		}
	 }
	 
	 for(int x=0; x<len; x++)
	 {
	 	cout << cipher[x];
	 }
	 
	 cout << endl;
  }
  
  
  return 0;
}
