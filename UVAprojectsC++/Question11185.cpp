#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tester,decimal,count;
	long long ternary;
	
	while(cin >> tester)
	{	
	    if(tester < 0)
	      return 0;  
	      
	    decimal = 0;  
	    ternary = 0;
	    int x = 0;
	    decimal = tester;
        count = 0;
	    
	    while(decimal > 0)
		{
			decimal /= 3;
			count++;
		}
		
		for(int y=count-1; y > -1; y--)
		{
			if(tester >= pow(3,y))
			{
				ternary *= 10;
				while(tester >= pow(3,y))
				{
					tester = tester - pow(3,y);
				    ternary += 1;
				}
			}
			else{
				ternary *= 10;
			}
		} 
		
		cout << ternary << endl; 
	}
	
	return 0;
}
