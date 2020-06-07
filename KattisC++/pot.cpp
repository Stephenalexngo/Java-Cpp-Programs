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
  
  ll nums, number, total=0,moder;
  	  	  	
  cin >> nums;
  
  while(nums--)
  {
  	 cin >> number;
  	 moder = number % 10;
  	 number = (number - moder)/10;
  	 
  	 total += pow(number,moder); 
  }
  
  cout << total;	  	  	
  	  	  	
  return 0;
}
