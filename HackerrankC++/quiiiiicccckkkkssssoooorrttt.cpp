#include <bits/stdc++.h>

using namespace std;

unsigned long long int calculatelog(unsigned long long int mid){
    return mid * log2(mid);
}

unsigned long long int compute_ans(unsigned long long int n){
    unsigned long long int hi = 2e15, lo = 0, temp, mid;

    while(lo < hi-1) {
        mid = (lo+hi) / 2;
        
        temp = calculatelog(mid) / 100000000;
        
//        cout << "TEMP = " << temp << endl;
//        cout << ceil(temp) << " === " << n << endl;
//        cout << "MIDPOINT = " << mid << endl;
//        cout << "HI = " << hi << " lo = " << lo << endl;
//        cout << "LOHIII = " << (lo-hi) << endl;
        
        if(temp + 1 > n)
            hi = mid;
        else
            lo = mid;
    
    }
    return lo;
}

int main() {
    unsigned long long int n;
    cin >> n;
    cout << compute_ans(n) << endl;
}