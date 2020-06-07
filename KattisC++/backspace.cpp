#include<bits/stdc++.h>
using namespace std;

int main() {

	string tester;
	stack<char> stackofchar,stackrev;
	
	while(cin >> tester)
	{
		for(int x=0; x<tester.length(); x++)
		{
			if(tester.at(x) != '<')
			  stackofchar.push(tester.at(x));
			else
			{
				if(!stackofchar.empty())
				{
					stackofchar.pop();
				}
			}  
		}
		
		while(!stackofchar.empty())
		{
			stackrev.push(stackofchar.top());
			stackofchar.pop();
		}
		
		while(!stackrev.empty())
		{
			printf("%c", stackrev.top());
			stackrev.pop();
		}
		
		cout << endl;
	}
	
	return 0;
}
