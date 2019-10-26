#include<bits/stdc++.h>
using namespace std;

int main() {

	int tester,y,singer;
	string name;
	string song[] = {"Happy", "birthday", "to" , "you"};
	bool isDone;
	
	while(cin >> tester)
	{
		vector<string> listofnames;
		
		for(int x=0; x<tester; x++)
		{
			cin >> name;
			listofnames.push_back(name);
		}
		
		y = 0;
		int z=0,x=0;
		singer = 0;
		isDone = false;
		
		while(singer <= listofnames.size() || !isDone)
		{
			isDone = false;
			z=0;
			while(z != 16)
			{
				if(z!=11)
				   cout << listofnames.at(y) << ": " << song[x] << endl;
				else{
				   cout << listofnames.at(y) << ": " << "Rujia" << endl;
				}   
				
				if(y == listofnames.size()-1)
				  y=0;
				else
				  y++;  
			  
				if(x == 3)
			  	  x=0;
				else
			  	  x++;    
			  
				z++;
				singer++;
			
				if(z == 16)
				   isDone = true;
			}
	    }
	}
	
	return 0;
}
