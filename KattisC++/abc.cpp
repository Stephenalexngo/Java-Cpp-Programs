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
  
  i num;
  vi nums,sorted;
  st letter;
  
  for(int x=0; x<3; x++)
  {
  	 cin >> num;
  	 nums.push_back(num);
  }
  
  sort(nums.begin(),nums.end());
  
  cin >> letter;
  for(int y=0; y<3; y++)
  {
  	if(letter[y] == 'A')
 	 	sorted.push_back(nums.at(0));
  	else if(letter[y] == 'B')
     	sorted.push_back(nums.at(1));
 	else
 	 	sorted.push_back(nums.at(2));
  }

  for(int z=0; z<3; z++)
  {
  	 if(z+1 == 3)
  	 	cout << sorted.at(z);
  	 else
	   	cout << sorted.at(z) << " ";	
  }
  return 0;
}
