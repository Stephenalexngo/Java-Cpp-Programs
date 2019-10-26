#include<bits/stdc++.h>
using namespace std;

int main() {

	int listofprice[100000];
	int tester;
	long price,money;
	
	while(cin >> tester)
	{
		for(int x=0; x<tester; x++)
		{
			cin >> listofprice[x];
		}
		
		sort(listofprice,listofprice + tester);
		cin >> money;
		
		int i = 0; 
		int j = tester - 1;
		int Bi, Bj;
		while(i < j)
		{
			if(listofprice[i] + listofprice[j] < money)
			   i++;
			else if(listofprice[i] + listofprice[j] == money)
			{
			   Bi=i;
			   Bj=j;
			   i++;
			   j++;
			}
			else
			   j--;   
		}
		printf("Peter should buy books whose prices are %d and %d.\n\n", listofprice[Bi],listofprice[Bj]);
		
	}
	return 0;
}
