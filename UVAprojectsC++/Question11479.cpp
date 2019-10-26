#include<bits/stdc++.h>
using namespace std;

int main() {

	long long tester,side1,side2,side3;
	
	while(cin >> tester)
	{
		for(int x=1; x<tester+1; x++)
		{
			cin >> side1;
			cin >> side2;
			cin >> side3;
			
			if(side1 > 0 && side2 > 0 && side3 > 0)
			{
				if(side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
				{
					if(side1 == side2 && side2 == side3 && side1 == side3)
					   printf("Case %d: Equilateral\n",x);
					else if(side1 == side2 || side2 == side3 || side1 == side3)   
					   printf("Case %d: Isosceles\n",x);
					else
					   printf("Case %d: Scalene\n",x);
				}
				else
				   printf("Case %d: Invalid\n",x);
			}
			else
			   printf("Case %d: Invalid\n",x);
			  
		}
	}
	
	return 0;
}
