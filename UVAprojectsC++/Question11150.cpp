#include<bits/stdc++.h>
using namespace std;

int main() {

	int tester, count;
	
	while(cin >> tester)
	{
		count = tester;
		while(tester >= 3)
		{
			count += tester/3;
			tester = tester/3 + tester%3;
		}
		
		if(tester%3==2)
		{
			count += 1;
		}
		
		cout << count << endl;
	}
	
	return 0;
}
