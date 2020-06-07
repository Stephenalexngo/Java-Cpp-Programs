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

vs words;

void removeDupWord(string str) 
{ 
   i equal = 0;
   
   istringstream ss(str); 
  
    do { 
        string word; 
        ss >> word; 
  
           if(words.size() == 0)
           	 words.push_back(word);
           else
		   {
		   	  for(int x=0; x<words.size(); x++)
		   	  {
		   	  	 if(words[x] == word)
		   	  	 {
		   	  	 	equal = 1;
		   	  	 	break;
				 }
			  }
		   }
		   
		   if(equal == 1)
	   		 break;
	   	   else	
           	 words.push_back(word); 
    } while (ss); 
   
   if(equal == 1)
   	 cout << "no";
   else
   	 cout << "yes";	 
} 

int main() 
{ 
	// freopen("out.txt","wt",stdout);
		
    st str;
    getline(cin,str);
    removeDupWord(str); 
    return 0; 
} 
