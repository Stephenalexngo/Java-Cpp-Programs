#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i length;
  st direc, curdir;
  
  while(cin >> length, length != 0)
  {
  	 curdir = "";
  	 
  	 for(int x=0; x<length-1; x++)
  	 {
  	 	cin >> direc;
  	 	if(direc != "No")
  	 	{
  	 		if(curdir == "")
  	 			curdir = direc;
  	 		else
  	 		{
  	 			if(curdir == "+y")
  	 			{
  	 				if(direc == "-y")
  	 					curdir = "+x";
  	 				else if(direc == "+y")
  	 					curdir = "-x";   	
				}
				else if(curdir == "-y")
				{
  	 				if(direc == "-y")
  	 					curdir = "-x";
  	 				else if(direc == "+y")
  	 					curdir = "+x";   	
				}
				else if(curdir == "+z")
				{
					if(direc == "+z")
						curdir = "-x";
					else if(direc == "-z")
						curdir = "+x";
				}
				else if(curdir == "-z")
				{
					if(direc == "-z")
						curdir = "-x";
					else if(direc == "+z")
						curdir = "+x";
				}
				else if(curdir == "+x")
					curdir = direc;		
				else if(curdir == "-x")
				{
					if(direc == "+z")
						curdir = "-z";
					else if(direc == "-z")
						curdir = "+z";
					else if(direc == "+y")
						curdir = "-y";
					else if(direc == "-y")
						curdir = "+y";			
				}
			}
		}
	 }
	 
	 if(curdir != "")
	 	cout << curdir << endl;
	 else
	    cout << "+x" << endl;	
  }
  
  return 0;
}
