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
  
  i numS = 0;
  st word;
  bool isHiss = false;

  cin >> word;
  
  for(int x=0; x<word.length(); x++)
  {
  	 if(word[x] == 's')
  	 {
  	 	if(numS == 1)
  	 	{
  	 		isHiss = true;
  	 		break;
		}
		else
			numS++;
	 }
	 else
	 	numS = 0;
  }   
     
  if(isHiss)
  	printf("hiss\n");
  else
  	printf("no hiss\n");	     
     
  return 0;
}
