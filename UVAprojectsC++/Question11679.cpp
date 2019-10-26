#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;
typedef float f;

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i banks, debts, debtor, creditor, money, bankreserve, canpay;
  
  while(cin >> banks >> debts, banks != 0 || debts != 0)
  {
  	vi reserves;
  	canpay = 1;
  	
  	 while(banks--)
  	 {
  	 	cin >> bankreserve;
  	 	reserves.push_back(bankreserve);
	 }
	 
	 while(debts--)
	 {
	 	cin >> debtor >> creditor >> money;
	 	reserves[debtor-1] -= money;
	 	reserves[creditor-1] += money;
	 }
	 
	 for(int x=0; x<reserves.size(); x++)
	 {
	 	if(reserves[x] < 0)
	 	{
	 		canpay = 0;
	 		break;
		}
	 }
	 
	 if(canpay)
	 	cout << "S" << endl;
	 else
	 	cout << "N" << endl;	
  }  
  
  

  return 0;
}
