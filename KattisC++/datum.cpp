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

int dayNumber(int day, int month, int year) 
{ 
  
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 
                       4, 6, 2, 4 }; 
    year -= month < 3; 
    return ( year + year/4 - year/100 + 
             year/400 + t[month-1] + day) % 7; 
} 

int main() 
{ 
   // freopen("out.txt","wt",stdout);
	
   i day, month, theday;
   
   cin >> day >> month;
   
   theday = dayNumber(day,month,2009);
   
   if(theday == 0)
   	cout << "Sunday";
   else if(theday == 1)
    cout << "Monday";
   else if(theday == 2)
    cout << "Tuesday";
   else if(theday == 3)
    cout << "Wednesday";		 	
   else if(theday == 4)
    cout << "Thursday";
   else if(theday == 5)
    cout << "Friday";
   else if(theday == 6)
    cout << "Saturday";
    
   return 0;
} 
