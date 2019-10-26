#include<bits/stdc++.h>
using namespace std;

int main() {

	string firststring, secondstring;
	
	while(cin >> firststring)
	{
		cin >> secondstring;
		stack<char> listofchar;
		
		for(int x=firststring.length()-1; x>-1; x--)
		{
			listofchar.push(firststring.at(x));
		}
		
		for(int y=0; y<secondstring.length(); y++)
	    {
	    	if(listofchar.empty())
	    	  break;
			else {
				if(listofchar.top() == secondstring.at(y))
			      listofchar.pop();
			}
		}
		
		if(listofchar.empty())
		  cout << "Yes" << endl;
		else
		  cout << "No" << endl;  
	}
	
	return 0;
}
