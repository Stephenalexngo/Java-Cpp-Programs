#include <bits/stdc++.h>
using namespace std;
/* 
 * function to multiply two matrices
 */
void multiply(unsigned long long int F[2][2], unsigned long long int M[2][2])
{
    unsigned long long int x =  F[0][0] * M[0][0] + F[0][1] * M[1][0];
    unsigned long long int y =  F[0][0] * M[0][1] + F[0][1] * M[1][1];
    unsigned long long int z =  F[1][0] * M[0][0] + F[1][1] * M[1][0];
    unsigned long long int w =  F[1][0] * M[0][1] + F[1][1] * M[1][1];
    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}
 
 /* 
  * function to calculate power of a matrix
  */
void power(unsigned long long int F[2][2], int n)
{
    if (n == 0 || n == 1)
        return;
    unsigned long long int M[2][2] = {{1,1},{1,0}};
    power(F, n / 2);
    multiply(F, F);
    if (n % 2 != 0)
        multiply(F, M);
}
 
/* 
 * function that returns nth Fibonacci number 
 */
unsigned long long int fibo_matrix(int n)
{
    unsigned long long int F[2][2] = {{1,1},{1,0}};
    if (n == 0)
        return 0;
    power(F, n - 1);
    return F[0][0];
}

char solve(int n, unsigned long long int k){
    
    if(n==0) return 'H';
    else if (n==1) return 'A';
    
    unsigned long long int left = fibo_matrix(n-1);
    
    if(k+1 > left){
        return solve(n-1, k-left);
    } else {
        return solve(n-2, k);
    }
}

int main() {    
      int n;
      unsigned long long int k;
    cin >> n >> k;
    
    if (n > 89) {
        n = 90;
    }
    
    cout << solve(n,k) << endl;
}