#include<bits/stdc++.h>
using namespace std;

typedef vector<string> vi;

int main() {

	int tester, nummove, coord;
	string move, word;
	
	while(cin >> tester)
	{	
	    for(int x=0; x<tester; x++)
	    {
	    	cin >> nummove;
	    	vi moves;
	    	coord = 0;
	    	cin.ignore();
	    	
	    	for(int y=0; y<nummove; y++)
	    	{
	    		getline(cin,move);
	    		stringstream ss;
	    		ss << move;
	    		vi lets;
	    		
	    		while(ss >> word){
					lets.push_back(word);
				}
	    	    		
	    		if(lets[0] == "LEFT"){
	    		  coord--;
				  moves.push_back(move);	 
				}
	    		else if(lets[0] == "RIGHT"){
	    		  coord++;
	    		  moves.push_back(move);
				}
				else{
					if(moves[stoi(lets[2])-1] == "LEFT")
					  coord--;
					else
					  coord++;  
				    
				   moves.push_back(moves[stoi(lets[2])-1]);
				}    
			}
			
			cout << coord << endl;
		}
	}
	
	return 0;
}
