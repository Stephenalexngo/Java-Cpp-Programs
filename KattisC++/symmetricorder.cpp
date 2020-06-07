#include<bits/stdc++.h>
using namespace std;

int main() {

	int tester,set=1;
	stack<string> firststack, secondstack,forthstack;
	string name;
	
	while(scanf("%d",&tester), tester != 0)
	{
		for(int x=1; x<tester+1; x++)
		{
			cin >> name;
			if(x%2 != 0)
			  firststack.push(name);
			else
			  secondstack.push(name);  
		}
		
		while(!firststack.empty())
		{
			forthstack.push(firststack.top());
			firststack.pop();
		}
		
		printf("SET %d\n", set);
		set++;
		
		while(!forthstack.empty() || !secondstack.empty())
		{
			if(!forthstack.empty())
			{
				cout << forthstack.top() << endl;
				forthstack.pop();
			}
			else
			{
				cout << secondstack.top() << endl;
				secondstack.pop();
			}
		}
	}
	
	return 0;
}
