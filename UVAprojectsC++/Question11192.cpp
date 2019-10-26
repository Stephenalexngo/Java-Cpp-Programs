#include <bits/stdc++.h>
using namespace std;

typedef stack<char> sc;
typedef int i;
typedef string s;

int main()
{
	i tester,count;
	s input;
	sc stchar;
	
	while(scanf("%d",&tester),tester != 0)
	{
		cin >> input;
		count = input.length()/tester;
		for(int x=0; x<input.length(); x++)
		{  
		    stchar.push(input.at(x));
			if(stchar.size() == count)
			{
				while(!stchar.empty())
				{
					printf("%c",stchar.top());
					stchar.pop();
				}
			}   
		}
		
		cout << endl;
	}
				
	return 0;
}
