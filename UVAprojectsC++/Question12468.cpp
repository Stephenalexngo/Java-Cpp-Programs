#include <bits/stdc++.h>
using namespace std;

typedef stack<char> sc;
typedef int i;
typedef string s;

int main()
{
	// freopen("out.txt","wt",stdout);
	i first, second, totf, tots;
	
	while(scanf("%d",&first), scanf("%d",&second), first != -1 && second != -1)
	{
		if(first < second)
		{
			totf = second - first;
		    tots = (first+100) - second;
		}
		else
		{
			totf = first - second;
		    tots = (second+100) - first;
		}
		
		if(second != first)
		{
			if(totf > tots)
			  cout << tots << endl;
			else if(tots > totf)
			  cout << totf << endl;
			else
			  cout << 50 << endl;  
		}
		else
		  cout << 0 << endl; 
	}
			
	return 0;
}
