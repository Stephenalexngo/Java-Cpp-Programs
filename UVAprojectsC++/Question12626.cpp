#include<bits/stdc++.h>
using namespace std;

int main() {

	int tester,Ms,As,Rs,Ts,Is,Gs,count;
	string pizza;
	bool isGood;
	
	while(cin >> tester)
	{
		for(int x=0; x<tester; x++)
		{
			isGood = true;
			Ms=0; As=0; Rs=0; Ts=0; Is=0; Gs=0; count=0;
			cin >> pizza;
			for(int y=0; y<pizza.length(); y++)
			{
				if(pizza.at(y) == 'A')
				   As++;
				else if(pizza.at(y) == 'M')
				   Ms++;
				else if(pizza.at(y) == 'R')
				   Rs++; 
				else if(pizza.at(y) == 'G')
				   Gs++; 
				else if(pizza.at(y) == 'T')
				   Ts++; 
				else if(pizza.at(y) == 'I')
				   Is++;              
			}
			
			while(isGood)
			{
				if(As >= 3 && Ms >= 1 && Gs >= 1 && Ts >= 1 && Is >= 1 && Rs >= 2)
				{
					count++;
					As-=3; Ms-=1; Ts-=1; Is-=1; Gs-=1; Rs-=2;
				}
				else
				   isGood=false;   
			}
			
			cout << count << endl;
		}		
	}
	
	return 0;
}
