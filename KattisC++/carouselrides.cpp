#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() {

	int n,m,a,b;
	
	while(cin >> n, cin >> m, n!=0 || m!=0)
	{
			int finalt=0, finald=-1;
			
			for(int y=0; y<n; y++)
			{
				cin >> a >> b;
				
				if(a <= m)
				{
					if(a * finald == b * finalt && a > finalt)
					{
						finalt = a;
						finald = b;
					}else if(finalt == 0){
						finalt = a;
						finald = b;
					}else if(a * finald > b * finalt){
						finalt = a;
						finald = b;
					}
				}
			}
				
			if(finalt > 0){
				printf("Buy %d tickets for $%d\n", finalt,finald);
			}else{
				printf("No suitable tickets offered\n");
			}	
		 
	}
	
	return 0;
}
