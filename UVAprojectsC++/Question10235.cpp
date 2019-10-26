#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tester, reversenum, number,reversemod;
	
	while(cin >> tester)
	{	
	    number = tester;
	    
	    reversenum = 0;
	    while(tester != 0)
	    {
	    	reversemod = tester % 10;
	    	tester = (tester - reversemod)/10;
	    	reversenum = reversenum*10 + reversemod;
		}
		
		int prime = 1;
		int emirp = 1;
		
		for(int i = 2; i < number / 2; i++)
		{
			if(number % i == 0)
			{
				prime = 0;
				break;
			}
		}
		   
		if(reversenum != number)
		{
			for(int i = 2; i < reversenum / 2; i++)
		    {
	    		if(reversenum % i == 0)
	    		{
	    			emirp = 0;
	    			break;
	    		}
	    	} 
		}
		else
			emirp = 0;
		
		
		if(prime == 1 && emirp == 1)
		   cout << number << " is emirp." << endl;
	    else if(prime == 1 && emirp == 0)
	       cout << number << " is prime." << endl;
		else
		   cout << number << " is not prime." << endl;
	}
	
	return 0;
}
