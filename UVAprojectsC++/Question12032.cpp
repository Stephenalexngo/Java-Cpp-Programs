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

  i tester,numofrung,runghei,mini,k;
  
  while(cin >> tester)
  {
  	  for(int x=0; x<tester; x++)
  	  {
  	  	 cin >> numofrung;
  	  	 mini = 0;
  	  	 i nums[100001];
  	  	 
  	  	 for(int z=1; z<=numofrung; z++)
  	  	 {
  	  	 	cin >> runghei;
			nums[z] = runghei;	 		 
		 }
		 
		 for(int a=1; a<=numofrung; a++)
		 {
		 	if(nums[a] - nums[a-1] > mini)
		 		mini = nums[a] - nums[a-1];
		 }
		 
		 k = mini;
		 
		 for(int y=1; y<=numofrung; y++)
		 {
		 	if(nums[y] - nums[y-1] == mini)
		 		mini--;
		 	else if(nums[y] - nums[y-1] > mini)
		 	{
		 		k++;
		 		break;
			}
		 }
		 
		 cout << "Case " << (x+1) << ": " << k << endl;
	  }
  }

  return 0;
}
