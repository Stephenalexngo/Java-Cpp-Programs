#include<bits/stdc++.h>
using namespace std;

int main() {

    // freopen("out.txt","wt",stdout);
	int tester,firstnum,secondnum;
	bool isStack, isQueue, isPrior;
	
	while(cin >> tester)
	{
		stack<int> st;
		queue<int> qu;
		priority_queue<int> pq;
		isStack = true; isQueue = true; isPrior = true;
		
		for(int x=0; x<tester; x++)
		{
			cin >> firstnum;
			cin >> secondnum;
			
				if(firstnum == 1)
				{
					st.push(secondnum);
					qu.push(secondnum);
					pq.push(secondnum);
				}
				else
				{
					if(isStack)
					{
						if(st.empty() || st.top()!=secondnum)
							isStack = false;
						else
							st.pop();
					}
					
					if(isQueue)
					{
						if(qu.empty() || qu.front()!=secondnum)
							isQueue = false;
						else
						 	qu.pop();	
					}
					
					if(isPrior)
					{
						if(pq.empty() || pq.top()!=secondnum)
							isPrior = false;
						else
							pq.pop();	
					}
				}
		}

		if(!isStack && !isQueue && !isPrior)
			printf("impossible\n");
		else if(isStack && !isQueue && !isPrior)
			printf("stack\n");
		else if(isQueue && !isStack && !isPrior)
			printf("queue\n");
		else if(isPrior && !isStack && !isQueue)
			printf("priority queue\n");
		else
			printf("not sure\n");
	}
	
	return 0;
}
