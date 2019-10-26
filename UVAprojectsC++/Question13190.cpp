#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("out.txt","wt",stdout);
	int tester,n,k,frequency;
	string namemed;
	map<string,int> listofmed, extramed;
	
	while(cin >> tester)
	{
		for(int x=0; x<tester; x++)
		{
			cin >> n;
			cin >> k;
			
			for(int y=0; y<n; y++)
			{
				cin >> namemed;
				cin >> frequency;
				listofmed.insert(pair<string,int>(namemed,frequency));
				extramed.insert(pair<string,int>(namemed,frequency));
			}
			
			map<string,int>::iterator it = listofmed.begin();
			int z=0;
			while(z<k)
			{   
			    typedef function<bool(pair<string, int>, pair<string, int>)> Comparator;
	            Comparator compFunctor =
			                       [](pair<string, int> elem1 ,pair<string, int> elem2)
		                           	 {
		                           	 	return elem1.second < elem2.second;
		                          	 };
		        set<pair<string, int>, Comparator> setOfWords(
		         	listofmed.begin(), listofmed.end(), compFunctor);
		         	
		        for (pair<string, int> element : setOfWords){
	             	cout << element.second << " " << element.first << endl; 
	             	break;
	            }
	 	
				map<string,int>::iterator itx = extramed.begin();
				
				while(itx != extramed.end())
				{
					if(itx->first == it->first)
					{  
						it->second += itx->second;
						break;
					}
					itx++;
				}
				z++;
			}
		}
	}
	
	return 0;
}
