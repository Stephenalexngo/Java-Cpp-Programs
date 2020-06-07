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
  
  i N,M,K,ki,counter=0,circlecounter=0;
  db ni,mi;
  vd plots, circle;
  
  cin >> N;
  cin >> M;
  cin >> K;
  
  for(int x=0; x<N; x++)
  {
  	 cin >> ni;
  	 plots.push_back(ni);
  }
  
  for(int y=0; y<M; y++)
  {
  	 cin >> mi;
  	 circle.push_back(mi);
  }
  
  for(int z=0; z<K; z++)
  {
  	 cin >> ki;
  	 db total;
  	 
  	 total = sqrt((ki*ki)+(ki*ki))/2;
  	 circle.push_back(total);
  }
  
  sort(plots.begin(),plots.end());
  sort(circle.begin(),circle.end());
  
  for(int a=0; a<N; a++)
  {
  	if(circlecounter != circle.size())
  	{
  		if(plots.at(a) > circle.at(circlecounter))
	  	{
	  		counter++;
	  	 	circlecounter++;
		}
	}
	else
		break;	 
  }
  
  cout << counter << endl;
  return 0;
}
