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

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i N, M;
  vs kang, nolist;
  st kangword, listword;
  
  cin >> N >> M;
  
  while(N--)
  {
  	 cin >> listword;
  	 nolist.push_back(listword);
  }
  
  while(M--)
  {
  	 cin >> kangword;
  	 kang.push_back(kangword);
  }
  
  sort(nolist.begin(), nolist.end());
  sort(kang.begin(), kang.end());
  
  i y=0, x=0 ,total=0, flag=0;
  while(x<kang.size() && y<nolist.size())
  {
  	 if(flag == 0)
  	 {
  	 	 if(kang[x] == nolist[y])
	  	 {
	  	 	total++;
	  	 	flag = 1;
		 }
		 x++;
	 }
	 else
	 {
	 	 if(kang[x] == nolist[y])
	 	 {
	 	 	total++;
	 	 	x++;
		 }
	  	 else
	  	 {
	  	 	y++;
	  	 	flag = 0;
		 }		
	 }	
  }
  
  printf("%d", total);
  
  return 0;
}
