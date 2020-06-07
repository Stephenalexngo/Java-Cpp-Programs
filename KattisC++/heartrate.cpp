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
  
  i test;
  db b,p, BPM, minAB, maxAB;
  
  cin >> test;
  
  while(test--)
  {
  	 cin >> b >> p;
  	 
  	 BPM = 60*b/p;
  	 
  	 minAB = BPM - (60/p);
  	 maxAB = (60/p) + BPM;
  	 
  	 printf("%.4lf %.4lf %.4lf\n",minAB,BPM,maxAB);
  }
  
  return 0;
}
