#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() {

	int total, temp, count, n, mod, m;
	
	while(cin >> n)
	{
	    vi nums;
		total = 0;
		m = n;

		while(n != 0){
			mod = n%10;
			n = (n - mod)/10;
			nums.push_back(mod);
		}
	    sort(nums.begin(),nums.end());
	    
  	    do{
  	       temp = 0;
  	 	   for(int x=0; x<nums.size(); x++)
  	 	   {
  	 	   	  temp *= 10;
  	 	   	  temp += nums.at(x);
		   }
		   
		   if(total == 0){
		   	  if(temp != m && temp > m)
		   	     total = temp;
		   }
		   else{
		   	 if(total > temp)
		   	   total = temp;
		   }
	    }while(next_permutation(nums.begin(),nums.end()));
	    
	    cout << total << endl;
	}
	
	return 0;
}
