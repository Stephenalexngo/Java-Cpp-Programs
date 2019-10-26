#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vi;

int main ()
{
  // freopen("out.txt","wt",stdout);
  string sentence, letter;
  int tester;
  
  while(cin >> tester)
  {
  	for(int z=0; z<tester; z++)
  	{
  	 	vi lets;	
  		cin >> sentence;

 		for(int y=0; y<sentence.length(); y++){
		   lets.push_back(sentence.at(y));
	    }
	    sort(lets.begin(),lets.end());
	 
  	    do{
  	 	   for(int x=0; x<lets.size(); x++)
  	 	   {
  	 	   	   if(x+1<lets.size())
  	 		     cout << lets.at(x);
  	 		   else
				 cout << lets.at(x) << endl;   
		   }
	    }while(next_permutation(lets.begin(),lets.end()));
	    cout << endl;
    }
  }

  return 0;
}
