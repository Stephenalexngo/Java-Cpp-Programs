#include<bits/stdc++.h>
using namespace std;

int main() {

	int row,col;
	char tester;
	
	while(cin >> row)
	{
		cin >> col;
		char arrchar[row][col];
		int nocar=0, onecar=0,twocar=0,threecar=0,fourcar=0;
		
		for(int i=0; i<row; i++)
		{
			for(int j=0; j<col; j++)
			{
				cin >> tester;
				arrchar[i][j] = tester;
			}
		}
		
		for(int x=0; x<row-1; x++)
		{
			for(int y=0; y<col-1; y++)
			{
				if(arrchar[x][y] != '#' && arrchar[x][y+1] != '#' && arrchar[x+1][y] != '#' && arrchar[x+1][y+1] != '#')
				{
					int somecar = 0;
					if(arrchar[x][y] == 'X')
					  somecar++;
					if(arrchar[x][y+1] == 'X')
					  somecar++;
					if(arrchar[x+1][y] == 'X')
					  somecar++;
					if(arrchar[x+1][y+1] == 'X')
					  somecar++;  
					
					if(somecar == 0)
					   nocar++;
					else if(somecar == 1)
					   onecar++;
					else if(somecar == 2)
					   twocar++;
					else if(somecar == 3)
					   threecar++;
					else
					   fourcar++;               
				}
			}
		}
		
		printf("%d\n%d\n%d\n%d\n%d\n", nocar,onecar,twocar,threecar,fourcar);
	}
	
	return 0;
}
