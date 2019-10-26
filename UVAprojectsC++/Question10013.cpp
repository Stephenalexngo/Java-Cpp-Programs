#include<bits/stdc++.h>
using namespace std;

int main() {

	int tester, cols, firstnum, secondnum;
	
	while(cin >> tester)
	{
		for(int x=0; x<tester; x++)
		{
			if(x>0)
			  printf("\n");
			  
			cin >> cols;
			int listofnums[1000000];
			
			for(int y=0; y<cols; y++)
			{
				cin >> firstnum;
				cin >> secondnum;
				
				listofnums[y] = firstnum + secondnum;
			}
			
			for(int z=cols-1; z>0; z--)
			{
				if(listofnums[z] > 9)
				{
					listofnums[z-1] = listofnums[z-1] + (listofnums[z]/10);
					listofnums[z] = listofnums[z]%10;
				}
			}
			
			for(int a=0; a<cols; a++)
			{
				printf("%d", listofnums[a]);
			}
			printf("\n");
		}
	}
	
	return 0;
}
