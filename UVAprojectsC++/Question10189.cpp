#include<bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef string st;
typedef int i;
typedef double db;
typedef long long ll;
typedef long l;
typedef char c;
typedef float f;

int main ()
{
  // freopen("out.txt","wt",stdout);
  
  i x_axis, y_axis, field = 1, counter;
  c symbol;
  
  while(cin >> x_axis >> y_axis)
  {
  	if(x_axis == 0 || y_axis == 0)
  		break;
  	
  	if(field > 1)
	 	cout << endl;
	 	
  	c mine[x_axis][y_axis];
  	 
  	 for(int x=0; x<x_axis; x++)
  	 {
  	 	for(int y=0; y<y_axis; y++)
  	 	{
  	 		cin >> symbol;
  	 		mine[x][y] = symbol;
		}
	 }
	
	 printf("Field #%d:\n",field++);
	 
	 for(int x=0; x<x_axis; x++)
  	 {
  	 	for(int y=0; y<y_axis; y++)
  	 	{
  	 		counter = 0;
  	 		
  	 		if( (x==0 && y==0) )
  	 		{
  	 			if(mine[x][y] == '*')
  	 				cout << "*";
  	 			else
				{
					if(mine[x][y+1] == '*')
						counter++;
					
					if(mine[x+1][y] == '*')	
						counter++;
					
					if(mine[x+1][y+1] == '*')	
						counter++;
						
					cout << counter;		
				}   	
			}
			else if( (x==0 && y==y_axis-1) )
			{
				if(mine[x][y] == '*')
  	 				cout << "*";
  	 			else
				{
					if(mine[x][y-1] == '*')
						counter++;
					
					if(mine[x+1][y] == '*')	
						counter++;
					
					if(mine[x+1][y-1] == '*')	
						counter++;
						
					cout << counter;		
				} 
			}
			else if( (x==x_axis-1 && y==0) )
			{
				if(mine[x][y] == '*')
  	 				cout << "*";
  	 			else
				{
					if(mine[x][y+1] == '*')
						counter++;
					
					if(mine[x-1][y] == '*')	
						counter++;
					
					if(mine[x-1][y+1] == '*')	
						counter++;
						
					cout << counter;		
				} 
			}
			else if( (x==x_axis-1 && y==y_axis-1) )
			{
				if(mine[x][y] == '*')
  	 				cout << "*";
  	 			else
				{
					if(mine[x-1][y] == '*')
						counter++;
					
					if(mine[x][y-1] == '*')	
						counter++;
					
					if(mine[x-1][y-1] == '*')	
						counter++;
						
					cout << counter;		
				} 
			}
			else if(y == 0)
			{
				if(mine[x][y] == '*')
  	 				cout << "*";
  	 			else
				{
					if(mine[x-1][y] == '*')
						counter++;
					
					if(mine[x+1][y] == '*')	
						counter++;
					
					if(mine[x-1][y+1] == '*')	
						counter++;
					
					if(mine[x][y+1] == '*')	
						counter++;
					
					if(mine[x+1][y+1] == '*')	
						counter++;
								
					cout << counter;		
				} 
			}
			else if(x == 0)
			{
				if(mine[x][y] == '*')
  	 				cout << "*";
  	 			else
				{
					if(mine[x][y-1] == '*')
						counter++;
					
					if(mine[x][y+1] == '*')	
						counter++;
					
					if(mine[x+1][y-1] == '*')	
						counter++;
					
					if(mine[x+1][y] == '*')	
						counter++;
					
					if(mine[x+1][y+1] == '*')	
						counter++;
								
					cout << counter;		
				} 
			}
			else if(y == y_axis-1)
			{
				if(mine[x][y] == '*')
  	 				cout << "*";
  	 			else
				{
					if(mine[x-1][y] == '*')
						counter++;
					
					if(mine[x+1][y] == '*')	
						counter++;
					
					if(mine[x-1][y-1] == '*')	
						counter++;
					
					if(mine[x][y-1] == '*')	
						counter++;
					
					if(mine[x+1][y-1] == '*')	
						counter++;
								
					cout << counter;		
				} 
			}
			else if(x == x_axis-1)
			{
				if(mine[x][y] == '*')
  	 				cout << "*";
  	 			else
				{
					if(mine[x][y-1] == '*')
						counter++;
					
					if(mine[x][y+1] == '*')	
						counter++;
					
					if(mine[x-1][y-1] == '*')	
						counter++;
					
					if(mine[x-1][y] == '*')	
						counter++;
					
					if(mine[x-1][y+1] == '*')	
						counter++;
								
					cout << counter;		
				} 
			}
			else
			{
				if(mine[x][y] == '*')
  	 				cout << "*";
  	 			else
				{
					if(mine[x-1][y-1] == '*')
						counter++;
					
					if(mine[x-1][y] == '*')	
						counter++;
					
					if(mine[x-1][y+1] == '*')	
						counter++;
					
					if(mine[x][y-1] == '*')	
						counter++;
					
					if(mine[x][y+1] == '*')	
						counter++;
					
					if(mine[x+1][y-1] == '*')	
						counter++;
					
					if(mine[x+1][y] == '*')	
						counter++;
					
					if(mine[x+1][y+1] == '*')	
						counter++;
										
					cout << counter;		
				} 
			}
		}
		
		cout << endl;
	 }
  }
  
  return 0;
}



// internet solution

//#include <iostream>
//#include <cstdio>
//using namespace std;
//#define MAX 105
//int dx[] = {0, 0, 1, -1, 1,-1,1,-1};
//int dy[] = {1, -1, 0, 0, 1,-1,-1,1};
//int m,n;
//bool isSafe(int x, int y){
//    if(x<0||y<0||x>=m||y>=n)return false;
//    return true;
//}
//int main()
//{
//   // freopen("input.txt", "r" , stdin);
//    char buf[MAX][MAX];
//    int out[MAX][MAX];
//    int x,y,i,j,k,cs=0;
//    bool BLANK = false;
//
//    while(scanf("%d %d",&m, &n)==2&& m){
//        gets(buf[0]);
//
//        for(i=0;i<m;i++)gets(buf[i]);
//        for(i=0;i<m;i++)
//            for(j=0;j<n;j++)out[i][j]=0;
//        for(i=0;i<m;i++)
//            for(j=0;j<n;j++){
//                if(buf[i][j]=='*'){
//                    for(k=0;k<8;k++){
//                        x= i+dx[k];
//                        y = j+dy[k];
//                        if(isSafe(x,y))out[x][y] +=1;
//                    }
//                }
//            }
//
//    if(BLANK)printf("\n");
//     printf("Field #%d:\n",++cs);
//    BLANK=true;
//    for(i=0;i<m;i++){
//        for(j=0;j<n;j++){
//            if(buf[i][j]=='*')printf("*");
//            else
//            printf("%d",out[i][j]);
//            }
//        printf("\n");
//        }
//    }
//    return 0;
//}
