#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;

int main ()
{
  int tester, number, total, temp;
  
  while(cin >> tester, tester!=0)
  {
  	priority_queue<int, vector<int>, greater<int> > pq;
  	total = 0;
  	
  	  for(int x=0; x<tester; x++)
  	  {
  	  	 cin >> number;
  	  	 pq.push(number);
	  }
	  
	  while(pq.size() > 1)
	  {
	  	  temp = pq.top();
	  	  pq.pop();
	  	  
	  	  temp += pq.top();
	  	  pq.pop();
	  	  
	  	  total += temp;
	  	  pq.push(temp);
	  }
	  
	  cout << total << endl;
  }

  return 0;
}
