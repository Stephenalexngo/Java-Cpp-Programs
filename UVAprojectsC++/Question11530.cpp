#include<bits/stdc++.h>
using namespace std;

int main() 
{
	// freopen("out.txt","wt",stdout);
	int tester, count, testcase=1;
	string str;
	bool have;
	char second[8] = {'b','e','h','k','n','q','u','x'};
	char third[8] = {'c','f','i','l','o','r','v','y'};
			
	while(cin >> tester)
	{
		cin.ignore();
		for(int z=0; z<tester; z++)
		{
			count = 0;
			getline(cin,str);
			for(int x=0; x<str.length(); x++)
			{
				have = true;
				if(str.at(x)=='z' || str.at(x)=='s'){
					have = false;
				    count+=4;
				}
				else{
					for(int y=0; y<8; y++)
					{
						if(second[y] == str.at(x)){
							count+=2;
							have = false;
							break;
						}
						else if(third[y] == str.at(x)){
							count+=3;
							have = false;
							break;
						}    
					}	
				}
				if(have)
				  count++;	
			}
			printf("Case #%d: %d\n",testcase,count);
			testcase++; 
		}
	}
	
	return 0;
}
