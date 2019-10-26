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

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i tester,num;
  
  while(cin >> tester, tester != 0)
  {
  	 vi nums;
  	 while(tester--)
  	 {
  	 	cin >> num;
  	 	
  	 	if(num != 0)
  	 		nums.push_back(num);	
	 }
	 
	 if(nums.empty())
	 	printf("0\n");
	 else
	 {
	 	for(int x=0; x<nums.size(); x++)
	 	{
	 		if(x+1 != nums.size())
	 			printf("%d ",nums.at(x));
	 		else
	 			printf("%d\n",nums.at(x));
		}
	 }	
  }
 
  return 0;
}
