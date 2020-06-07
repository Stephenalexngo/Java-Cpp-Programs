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
	
   i n, m;

    while(cin >> n >> m && n != 0 && m != 0) 
	{
        vi jack, jill, ans;

        int temp;
        for(int i = 0; i < n; i++) 
		{
            cin >> temp;
            jack.push_back(temp);
        }

        for(int i = 0; i < m; i++) 
		{
            cin >> temp;
            jill.push_back(temp);
        }

        set_intersection(jack.begin(), jack.end(), jill.begin(), jill.end(), back_inserter(ans));

        cout << ans.size() << endl;
    }
   	  		  
   return 0;
} 
