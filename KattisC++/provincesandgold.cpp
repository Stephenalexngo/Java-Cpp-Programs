#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
	int g,s,c,total,single=1;
	
	cin >> g >> s >> c;
	
	total = g*3 + s*2 + c;
	
	if(total >= 8)
		cout << "Province";
	else if(total >= 5)
		cout << "Duchy";
	else if(total >= 2)
		cout << "Estate";
	else
		single = 0;	
	
	if(single == 1)
		cout << " or ";
	
	if(total >= 6)
		cout << "Gold	";
	else if(total >= 3)
		cout << "Silver";
	else
		cout << "Copper";
	
	return 0;
}
