#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
	int n,h,v,length,width;
	
	scanf("%d %d %d",&n,&h,&v);
	
	length = max(n-h,h);
	width = max(n-v,v);
	
	printf("%d",length*width*4);
	
	return 0;
}
