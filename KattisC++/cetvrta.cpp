#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef stack<long long> sll;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i layerx[3], layery[3], x, y, finalx, finaly;
  
  for(int i=0; i<3; i++)
  {
  	 cin >> x >> y;
  	 layerx[i] = x;
  	 layery[i] = y;
  }
  
  sort(layerx,layerx+3);
  sort(layery,layery+3);
  
  if(layerx[0] == layerx[1])
  	finalx = layerx[2];
  else
  	finalx = layerx[0];
	  
  if(layery[0] == layery[1])
  	finaly = layery[2];
  else
  	finaly = layery[0];
	  
  cout << finalx << " " << finaly;
  	  	  	
  return 0;
}
