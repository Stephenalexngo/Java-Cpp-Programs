#include <bits/stdc++.h>

using namespace std;

bool sorting(const int &p1,  
               const int &p2) 
{ 
       return p1 > p2; 
} 

int main() {
  	int test;

	cin >> test;

	for(int i=1; i<=test; i++){
		int numtowns, targettown, numemp;
		cin >> numtowns >> targettown >> numemp;
		vector<deque<int> > emppair(numtowns);
		targettown--;
		
		for(int x=0; x<numemp; x++){
			int H, P;
			cin >> H >> P;

			emppair[H-1].push_back(P);
		}

		bool possible = true;
		vector<int> answer(numtowns, 0);

		for(int x=0; x<numtowns; x++){
			if(x != targettown){
				sort(emppair[x].begin(), emppair[x].end(), sorting);
				int totcars = 0;
				
				while(emppair[x].size() > 0){
					if(emppair[x].front() != 0){
						totcars++;
						
						int currentcaruse = emppair[x].front() - 1;
						emppair[x].pop_front();
						
						while(currentcaruse-- && emppair[x].size() > 0){
							emppair[x].pop_back();
						}
					}
					else{
						possible = false;
						break;
					}
				}
				
				answer[x] = totcars;
			}
		}

		if(possible){
			printf("Case #%d:", i);
			for(int z=0; z<numtowns; z++){
				printf(" %d", answer[z]);
			}
			printf("\n");
		}
		else
			printf("Case #%d: IMPOSSIBLE\n", i);
	}
	
	return 0;
}
