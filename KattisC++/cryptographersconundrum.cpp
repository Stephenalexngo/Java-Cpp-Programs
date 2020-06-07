#include<bits/stdc++.h>

#define INF 1e9;

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef long long ll;

#define PI 3.14159265

int main() 
{ 
   // freopen("out.txt","wt",stdout);
	
   string word;
   int count=0; 
   
   cin >> word;
   
   for(int x=0; x<word.length(); x++)
   {
   	  if(x % 3 == 0){
   	  	if(word[x] != 'P')
   	  		count++;
	  }else if(x % 3 == 1){
	  	if(word[x] != 'E')
	  		count++;
	  }else if(x % 3 == 2){
	  	if(word[x] != 'R')
	  		count++;
	  }
   }
   
   cout << count;
   
   return 0;
} 
