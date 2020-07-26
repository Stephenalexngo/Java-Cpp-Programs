#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
   	int p,d,totalvotes=0, wA=0, wB=0,district, voteA, voteB;
   	
   	cin >> p >> d;
   	
   	int partyA[d] = {0}, partyB[d] = {0};
   	
   	for(int x=0; x<p; x++){
   		cin >> district >> voteA >> voteB;
   		
   		partyA[district-1] += voteA;
   		partyB[district-1] += voteB;
   		
   		totalvotes += voteA;
   		totalvotes += voteB;
	}

	for(int x=0; x<d; x++){
		int losing = ((partyA[x]+partyB[x])/2)+1;
		if(partyA[x] > partyB[x]){
			cout << "A " << partyA[x]-losing << " " << partyB[x] << endl;
			wA+=partyA[x]-losing;
			wB+=partyB[x];
		}
			
		else{
			cout << "B " << partyA[x] << " " << partyB[x]-losing << endl;
			wA+=partyA[x];
			wB+=partyB[x]-losing;
		}	
	}
	
	printf("%.10lf", (double)abs((wA-wB))/(double)totalvotes);
	
   	return 0;
}
