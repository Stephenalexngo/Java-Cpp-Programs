#include <bits/stdc++.h>
using namespace std;

int main()
{
	// freopen("out.txt","wt",stdout);
	int tester, s, t, freefooddays;
	bool numofdays[366];
	
	while(cin >> tester)
	{
		freefooddays = 0;
		for(int z=0; z<366;z++)
		{
			numofdays[z] = false;
		}
		
		for(int x=0; x<tester; x++)
		{
			cin >> s;
			cin >> t;
			
			for(int y=s; s<t+1; s++)
			{
				if(!numofdays[s])
				{
					numofdays[s] = true;
					freefooddays++;
				}
			}
		}
		
		cout << freefooddays << endl;
	}
	
	return 0;
}
