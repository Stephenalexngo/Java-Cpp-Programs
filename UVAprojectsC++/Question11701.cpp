#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

int main ()
{
  // freopen("out.txt","wt",stdout);

  i len,number;
  div_t divresult;
  bool member;
  st out, tester;

  while(cin >> tester, tester != "END")
  {
  	 member = true;

  	 if(tester != "1" && tester != "0")
  	 {
  	 	out = tester.substr(2);
	 	stringstream num(out);
	 	number = 0;
	 	num >> number;
		
  	 	 while(number != 0)
	  	 {
	  	 	divresult = div(number,3);
			number = divresult.quot;

		    cout << "number = " << number << " rem = " << divresult.rem << endl;

			if(divresult.rem == 1)
			{
				member = false;
				break;
			}    	
		 }
	 }

	 if(member)
	 	printf("MEMBER\n");
	 else
	 	printf("NON-MEMBER\n");	
	 	
  }

  return 0;
}
