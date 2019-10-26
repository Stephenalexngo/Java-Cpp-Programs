#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tester, N,age;
	
	while(cin >> tester)
	{
		for(int x=1; x<tester+1; x++)
		{
			cin >> N;
			vector<int> numofplayers;
			
			for(int y=0; y<N; y++)
			{
				cin >> age;
				numofplayers.push_back(age);
			}
			
			sort(numofplayers.begin(),numofplayers.end());
			cout << "Case " << x << ": " << numofplayers.at(numofplayers.size()/2) << endl;
		}
	}
	
	return 0;
}
