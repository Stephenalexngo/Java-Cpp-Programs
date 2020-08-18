// Group Members - Karl King, Stephen Alex Ngo, Lenard Balwin To

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define PI 3.14159265

int minHeight(int base, int area){ 
    return ceil((float)(2*area)/base); 
} 
  
int main() { 
    int base = 4, area = 8; 
    cin >> base >> area;
    cout << minHeight(base, area) << endl; 
    return 0; 
} 
