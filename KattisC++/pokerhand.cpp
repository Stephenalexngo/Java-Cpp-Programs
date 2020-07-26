#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
   char first, second;
   int arr[13] = {0};
   
   for(int x=0; x<5; x++)
   {
      cin >> first >> second;   
      
	  if(first == 'A')
	  	arr[0]++;
	  else if(first == 'T')
	  	arr[9]++;
	  else if(first == 'J')
	    arr[10]++;
	  else if(first == 'Q')
	    arr[11]++;
	  else if(first == 'K')	
	    arr[12]++;
	  else
	  	arr[(int)first-48]++;   
   }
   
   int *max = max_element(arr, arr + 13);
   cout << *max;	

   return 0;
}
