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

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i numx, numo, test, win1, win2;
  st row;
  
  cin >> test;
  
  while(test--)
  {
  	 numx=0;
  	 numo=0;
  	 win1=0;
  	 win2=0;
  	 char grid[3][3];
  	 for(int y=0; y<3; y++)
  	 { 
  	 	cin >> row;
		 for(int x=0; x<3; x++)
		 {
		 	grid[y][x] = row[x];
		 	if(grid[y][x] == 'X')
		 		numx++;
		 	else if(grid[y][x] == 'O')
			 	numo++;	
		 }
	 }
	 
	 if( (grid[0][0] == 'X' && grid[0][1] == 'X' && grid[0][2] == 'X') )
		win1 = 1;
	 else if( (grid[0][0] == 'O' && grid[0][1] == 'O' && grid[0][2] == 'O') )
	 	win2 = 1;
	 	
	 if( (grid[1][0] == 'X' && grid[1][1] == 'X' && grid[1][2] == 'X') ) 
	 	win1 = 1;
	 else if((grid[1][0] == 'O' && grid[1][1] == 'O' && grid[1][2] == 'O'))
	 	win2 = 1;
		
	 if( (grid[2][0] == 'X' && grid[2][1] == 'X' && grid[2][2] == 'X') )
	 	win1 = 1; 
	 else if((grid[2][0] == 'O' && grid[2][1] == 'O' && grid[2][2] == 'O'))
	 	win2 = 1;
	
	 if( (grid[0][0] == 'X' && grid[1][0] == 'X' && grid[2][0] == 'X') ) 
	 	win1 = 1;
	 else if((grid[0][0] == 'O' && grid[1][0] == 'O' && grid[2][0] == 'O'))
	 	win2 = 1;
	
     if( (grid[0][1] == 'X' && grid[1][1] == 'X' && grid[2][1] == 'X') ) 
     	win1 = 1;
	 else if((grid[0][1] == 'O' && grid[1][1] == 'O' && grid[2][1] == 'O'))
	 	win2 = 1;
	 
	 if( (grid[0][2] == 'X' && grid[1][2] == 'X' && grid[2][2] == 'X') ) 
	 	win1 = 1;
	 else if((grid[0][2] == 'O' && grid[1][2] == 'O' && grid[2][2] == 'O'))
	 	win2 = 1;
	 	
	 if( (grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X') ) 
	 	win1 = 1;
	 else if((grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O'))
	 	win2 = 1; 
		
	 if( (grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X') ) 
	 	win1 = 1;
	 else if((grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O'))
	 	win2 = 1;
		 
	 if(win1 == 1 && win2 == 1)	 
	 	cout << "no" << endl;
	 else if(win2 == 1 && numx != numo)
	 	cout << "no" << endl;
	 else if(win1 == 1 && numx-1 != numo)
	 	cout << "no" << endl;	 	 	 
	 else if(numo > numx)
	 	cout << "no" << endl;
	 else if(numx == numo)
	 	cout << "yes" << endl;	
	 else if(numx-numo != 1)
	 	cout << "no" << endl;
	 else
	 	cout << "yes" << endl;	  
  }
  
  return 0;
}
