#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("out.txt","wt",stdout);
	int tester;
	string query, name;
	stack<string> listofnames;
	
	while(cin >> tester)
	{
		for(int x=0; x<tester; x++)
		{
			cin >> query;
			
			if(query == "Sleep")
			{
				cin >> name;
				listofnames.push(name);
			}
			else if(query == "Test")
			{
				if(!listofnames.empty())
				   cout << listofnames.top() << endl;
				else
				   cout << "Not in a dream" << endl;
			}
			else
			{
				if(!listofnames.empty())
				   listofnames.pop();
			}
		}
	}
	
	return 0;
}
