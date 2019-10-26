#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef multiset<int, greater<int> > mri;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;
typedef float f;

i test, shops, garments, budget;
i garmprice[20][20];
i dp[201][20];
i garms[20];

int check(int money, int curgar)
{
	if(money < 0)
		return -1;	
	
	if(curgar == shops)
	 return budget - money;
	
	if(dp[money][curgar] != -1)
		return dp[money][curgar];
	
    i ans = -1;
	for(int i=0; i<garms[curgar]; i++)
	{
		ans = max(ans, check((money - garmprice[curgar][i]), curgar + 1));
	}
	
	return dp[money][curgar] = ans;
}

int main ()
{
  // freopen("out.txt","wt",stdout);

  while(cin >> test)
  {
  	 while(test--)
  	 {
  	 	cin >> budget >> shops;
  	 	
  	 	for(int y=0; y<shops; y++)
  	 	{
  	 		scanf("%d", &garms[y]);
  	 		
  	 		for(int x=0; x<garms[y]; x++)
  	 		{
  	 			scanf("%d", &garmprice[y][x]);
			}
		}
		
		memset(dp,-1,sizeof dp);
		i ans = check(budget,0);
		
		if(ans > 0)
			cout << ans << endl;
		else
			cout << "no solution" << endl;		
	 }
  }
  
  return 0;
}
