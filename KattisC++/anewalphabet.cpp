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
		
   unordered_map<char, string> alpha_map{
            {'A', "@"},
            {'B', "8"},
            {'C', "("},
            {'D', "|)"},
            {'E', "3"},
            {'F', "#"},
            {'G', "6"},
            {'H', "[-]"},
            {'I', "|"},
            {'J', "_|"},
            {'K', "|<"},
            {'L', "1"},
            {'M', "[]\\/[]"},
            {'N', "[]\\[]"},
            {'O', "0"},
            {'P', "|D"},
            {'Q', "(,)"},
            {'R', "|Z"},
            {'S', "$"},
            {'T', "']['"},
            {'U', "|_|"},
            {'V', "\\/"},
            {'W', "\\/\\/"},
            {'X', "}{"},
            {'Y', "`/"},
            {'Z', "2"}
    };
    c ch;
    while (scanf("%c", &ch) > 0)
    {
        if ('a' <= ch && ch <= 'z') 
			printf("%s", alpha_map[ch - 32].c_str());
        else if ('A' <= ch && ch <= 'Z') 
			printf("%s", alpha_map[ch].c_str());
        else 
			printf("%c", ch);
    }
   
   return 0;
} 
