#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() 
{
	// freopen("out.txt","wt",stdout);
	string line;
	int x;
	bool ruler;
	bitset<2001> marks;
	
	while(getline(cin,line))
	{
		marks.reset();
		vi nums;
		stringstream ss;
		ss << line;
		ruler = true;

		while(ss >> x){
			nums.push_back(x);
		}
	
		sort(nums.begin(),nums.end());			
		
		for(int i=0; i<nums.size()-1; i++)
		{
			for(int j=i+1; j<nums.size(); j++)
			{
				if(marks[nums[j]-nums[i]])
				{
				 	ruler = false;
				 	break;
				}
				else
				   marks[nums[j]-nums[i]] = true; 
			}
		}
		
		if(ruler)
		{
			bool Good = true;
			vi count;
			for(int z=1; z <= nums.back(); z++)
			{
				if(Good){
					if(marks[z]==false)
					{
						Good = false;
						count.push_back(z);
					}
				}
				else{
					if(marks[z]==false)
						count.push_back(z);	
				}
			}
			
			if(Good){
			  cout << "perfect" << endl;
			}
			else{
				cout << "missing";
				for(int a=0; a<count.size(); a++)
				{
					cout << " " << count.at(a); 
				}
				cout << endl;
			}  
		}
		else{
			cout << "not a ruler" << endl;
		}		
    }
	return 0;
}
