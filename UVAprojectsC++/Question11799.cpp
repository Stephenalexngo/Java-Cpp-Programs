#include <bits/stdc++.h>
using namespace std;

int main()
{
	// freopen("out.txt","wt",stdout);
	int tester, numofclowns, speedofclowns;
	
	while(cin >> tester)
	{
		for(int x=1; x<tester+1; x++)
		{
			cin >> numofclowns;
			vector<int> numofspeed;
			
			for(int y=0; y<numofclowns; y++)
			{
				cin >> speedofclowns;
				numofspeed.push_back(speedofclowns);
			}
			
			sort(numofspeed.begin(), numofspeed.end());
			
			printf("Case %d: %d\n", x, numofspeed.at(numofspeed.size()-1));
		}
	}
	
	return 0;
}
