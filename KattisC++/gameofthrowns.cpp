#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
    // freopen("out.txt","wt",stdout);
	
	stack<int> children;
	int child, moves;
	string step;
	
	children.push(0);
	
	cin >> child >> moves;
	
	for(int x=0; x<moves; x++){
		cin >> step;
		
		if(step == "undo"){
			cin >> step;
			stringstream geek(step); 
			
			int num = 0;
			geek >> num;
			
			for(int y=0; y<num; y++){
				children.pop();
			}
		}
		else{
			stringstream geek(step); 
			
			int num = 0;
			geek >> num;
			
			children.push((children.top()+num)%child);
		}
	}
	
	int num = children.top();
	
	while(num < 0){
		num += child;
	}
	
	cout << num;
	
   	return 0;
}
