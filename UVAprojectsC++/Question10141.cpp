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
  
  i numofreq, numofprop, numofreqmet, rfp = 1, curmet;
  st req, propname, curprop, metprop;
  db propprice, curprice;
  
  while(scanf("%d %d",&numofreq, &numofprop), numofreq != 0, numofprop != 0)
  {
  	  getline(cin,req);
  	  for(int x=0; x<numofreq; x++)
  	  {
  	  	  getline(cin,req);
	  }
	  
	  curprice = -1;
	  
	  for(int y=0; y<numofprop; y++)
	  {
	  	  getline(cin,propname);
	  	  cin >> propprice >> numofreqmet;
	  	  
	  	  if(numofreqmet == numofreq)
	  	  {
	  	  	  if(curprice == -1)
	  	  	  {
	  	  	  	 curprop = propname;
	  	  	  	 curprice = propprice;
			  }
			  else
			  {
			  	 if(curprice > propprice)
			  	 {
			  	 	curprice = propprice;
			  	 	curprop = propname;
				 }
			  }
			  
			  curmet = numofreqmet;
		  }
		  else
		  {
		  	  if(curprice == -1)
		  	  {
		  	  	 curprop = propname;
	  	  	  	 curprice = propprice;
	  	  	  	 curmet = numofreqmet;
			  }
			  else
			  {
			  	 if(curmet < numofreqmet)
			  	 {
			  	 	curprop = propname;
	  	  	  	 	curprice = propprice;
	  	  	  	 	curmet = numofreqmet;
				 }
				 else if(curmet == numofreqmet)
				 {
				 	if(curprice > propprice)
				 	{
				 	   	curprop = propname;
	  	  	  	 		curprice = propprice;
					}
				 }
			  }
		  }
		  
		  getline(cin,metprop);
		  for(int z=0; z<numofreqmet; z++)
		  {
		  	  getline(cin,metprop);
		  }
	  }
	  
	  if(rfp > 1)
	  	cout << endl;
	  
	  printf("RFP #%d\n",rfp);
	  cout << curprop << endl;
	  rfp++;
  }
  
  return 0;
}
