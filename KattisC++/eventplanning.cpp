#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vdb;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef pair<int,int> ii;
typedef stack<long long> sll;
typedef stack<long> sl;
typedef stack<char> sc;
typedef stack<int> si;
typedef stack<double> sdb;
typedef stack<string> ss;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;

#define PI 3.14159265

int main() 
{ 
   // freopen("out.txt","wt",stdout);
	
   i numpar, budget, hotels, numweek, price, availbed, mini=500001;
   
   cin >> numpar >> budget >> hotels >> numweek;
   
   while(hotels--)
   {
   	 cin >> price;
   	 
   	 for(int x=0; x<numweek; x++)
   	 {
   	 	cin >> availbed;
   	 	
   	 	if(availbed >= numpar)
   	 	{
   	 		ll total = numpar*price;
   	 		if(total < budget)
   	 		{
   	 			if(total < mini)
   	 				mini = total;
			}
		}
	 }
   }
   
   if(mini == 500001)
   	cout << "stay home";
   else
    cout << mini;	
   
   return 0;
} 
