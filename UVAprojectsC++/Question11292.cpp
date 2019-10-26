#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i nH, nK, head, knight;
  vi numknight, numhead;
  
  while(scanf("%d %d",&nH, &nK), nH != 0 && nK != 0)
  {	  
  	  for(int x=0; x<nH; x++)
  	  {
  	  	  cin >> head;
  	  	  numhead.push_back(head);
	  }
	  
	  for(int y=0; y<nK; y++)
	  {
	  	  cin >> knight;
	  	  numknight.push_back(knight);
	  }
	  
	  sort(numhead.begin(),numhead.end());
	  sort(numknight.begin(),numknight.end());
	  int counter = 0, sum = 0;
	  bool cankill = false;	
		
	  if(nK >= nH)
	  {
		for(int a=0; a<numknight.size(); a++)
		{
		   	if(numknight.at(a) >= numhead.at(counter))
		   	{
		   		sum += numknight.at(a);
		   		counter++;
			}
			
			if(counter == numhead.size())
			{
				cankill = true;	
				break;
			}
		}
		
		if(cankill)
			cout << sum << endl;
		else
			cout << "Loowater is doomed!" << endl;	
	  }
	  else
	  	 cout << "Loowater is doomed!" << endl;
	  	 
	  numknight.clear();
	  numhead.clear();	 
  }
  
  return 0;
}
