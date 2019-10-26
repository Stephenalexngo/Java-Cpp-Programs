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

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  long tester,input,bin,hex,modd,binary;
  
  while(cin >> tester)
  {
  	for(int j=0; j<tester; j++)
  	{
  		cin >> input;
  		
  		binary = input;
  		bin = 0;
  		hex = 0;
  	
		while(binary)
		{
			bin += binary & 1;
			binary >>= 1;
		}
		
		while(input)
		{
			modd = input % 10;
			input = (input - modd)/10;
			
			if(modd == 1 || modd == 2 || modd == 4 || modd == 8)
			  hex++;
			else if(modd == 3 || modd == 5 || modd == 6 || modd == 9)
			  hex+=2;        
			else if(modd == 7)
			  hex+=3; 
		}
		cout << bin << " " << hex << endl;		
  	}
  }
  
  return 0;
}
