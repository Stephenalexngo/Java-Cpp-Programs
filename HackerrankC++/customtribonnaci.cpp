#include<bits/stdc++.h> 
using namespace std; 
  
#define MOD 1000000007LL

void multiply(long long a[3][3], long long b[3][3]) 
{ 

    long long mul[3][3]; 
    for (int i = 0; i < 3; i++) 
    { 
        for (int j = 0; j < 3; j++) 
        { 
            mul[i][j] = 0; 
            for (int k = 0; k < 3; k++) 
                mul[i][j] += (a[i][k]%MOD)*(b[k][j]%MOD); 
        } 
    } 
  
    for (int i=0; i<3; i++) 
        for (int j=0; j<3; j++) 
            a[i][j] = (mul[i][j]%MOD);
} 
  
long long power(long long a, long long b, long long c, long long F[3][3], long long n) 
{ 
    long long M[3][3] = {{1,1,1}, {1,0,0}, {0,1,0}}; 
  
    if (n==1) 
        return ( ((F[0][0]*c)%MOD) + ((F[0][1]*b)%MOD) + ((F[0][2]*a)%MOD) ) % MOD; 
  
    power(a,b,c,F, n/2); 
  
    multiply(F, F); 
  
    if (n%2 != 0) 
        multiply(F, M); 
  
    return ( ((F[0][0]*c)%MOD) + ((F[0][1]*b)%MOD) + ((F[0][2]*a)%MOD) ) % MOD; 
} 
  
long long findNthTerm(long long a, long long b, long long c, long long n) 
{ 
  
    long long F[3][3] = {{1,1,1}, {1,0,0}, {0,1,0}} ; 
  
    if(n==0) 
        return (a%MOD); 
    else if(n==1)
        return (b%MOD);
    else if(n==2) 
        return (c%MOD); 
    else
        return power(a, b, c, F, n-2); 
} 

int main() 
{ 
   long long a,  b, c, n;
   cin >> a >> b >> c >> n;
  
   cout << findNthTerm( (a%MOD), (b%MOD), (c%MOD), n); 
  
   return 0; 
} 