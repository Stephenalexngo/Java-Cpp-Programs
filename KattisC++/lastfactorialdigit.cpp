#include<bits/stdc++.h>
using namespace std;

int main() {

	int tester, input, sum;
	
	while(cin >> tester)
	{
		for(int x=0; x<tester; x++)
		{
			cin >> input;
			sum = 1;
			
			for(int y=1; y<input+1; y++)
			{
				sum *= y;
			}
			
			cout << (sum%10) << endl;
		}
	}
	
	return 0;
}
