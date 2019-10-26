#include<bits/stdc++.h>
using namespace std;

int main() {
	int B[3], G[3], C[3];

	while (scanf("%d %d %d %d %d %d %d %d %d", &B[0], &G[0], &C[0], &B[1],
			&G[1], &C[1], &B[2], &G[2], &C[2]) != EOF) {
		int min = INT_MAX, temp;
		char ans[4];
		
		temp = C[0] + G[0] + B[1] + G[1] + B[2] + C[2];
		if (temp < min) {
			min = temp;
			strcpy(ans, "BCG");
		}
		
		temp = C[0] + G[0] + B[1] + C[1] + B[2] + G[2];
		if (temp < min) {
			min = temp;
			strcpy(ans, "BGC");
		}
		
		temp = B[0] + G[0] + C[1] + G[1] + B[2] + C[2];
		if (temp < min) {
			min = temp;
			strcpy(ans, "CBG");
		}
		
		temp = B[0] + G[0] + B[1] + C[1] + G[2] + C[2];
		if (temp < min) {
			min = temp;
			strcpy(ans, "CGB");
		}
		
		temp = C[0] + B[0] + C[1] + G[1] + B[2] + G[2];
		if (temp < min) {
			min = temp;
			strcpy(ans, "GBC");
		}
		
		temp = C[0] + B[0] + B[1] + G[1] + G[2] + C[2];
		if (temp < min) {
			min = temp;
			strcpy(ans, "GCB");
		}

		printf("%s %d\n",ans,min);
	}

	return 0;
}
