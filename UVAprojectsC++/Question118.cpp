#include <bits/stdc++.h>
using namespace std;
int dx[] = {0, 1, 0, -1};
int dy[] = {-1 , 0 , 1 , 0};

int main()
{
	int gridx, gridy,robotx,roboty;
	bool scent[51][51];
	string direction;
	string movement;
	
	cin >> gridx;
	cin >> gridy;
	
	for(int i=0; i <= gridx; i++)
	{
		for(int j=0; j<=gridy; j++)
		{
			scent[i][j]=false;
		}
	}
	
	while(cin >> robotx)
	{	
	     cin >> roboty;
	     cin >> direction;
	     bool isLost = false;
	     
	     int d;
	     if(direction == "S")
	        d = 0;
	     else if(direction == "E")
		    d = 1;
		 else if(direction == "N")
		    d = 2;
		 else
		    d = 3;		   
	     
	     cin >> movement;
	     
	     for(int x=0; x < movement.length(); x++)
	     {
	     	if(movement[x] == 'F')
	     	{
	     		int nx = robotx + dx[d];
	     		int ny = roboty + dy[d];
	     		
	     		if(nx > gridx || ny > gridy || nx < 0 || ny < 0)
	     		{
	     			if(!scent[robotx][roboty]){
				       scent[robotx][roboty] = true;  
				       isLost = true; 
				       break;
				    }
				}
				else{
					robotx = nx;
					roboty = ny;
				}
			}
			else if(movement[x] == 'L')
			{
				d = (d+1)%4;
			}
			else if(movement[x] == 'R')
			{
				d = (d+3)%4;
			}
	     	  
		 }
		 
		 if(d == 0)
	        direction = "S";
	     else if(d == 1)
		    direction = "E";
		 else if(d == 2)
		    direction = "N";
		 else
		    direction = "W";
		 
		 if(isLost)
		   printf("%d %d %s LOST\n", robotx, roboty, direction.c_str());
		 else
		   printf("%d %d %s\n", robotx, roboty, direction.c_str()); 
	}
	
	return 0;
}
