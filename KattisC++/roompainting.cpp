#include <bits/stdc++.h> 

using namespace std; 

typedef long long ll;

int main() 
{ 
    
    ll n, m, shoppaint, yourpaint, total=0;
    vector<ll> arrpaints;
    vector<ll>::iterator low1;
    
    cin >> n >> m;
    
    for(ll x=0; x<n; x++){
        cin >> shoppaint;
        arrpaints.push_back(shoppaint);
    }
    
    sort(arrpaints.begin(), arrpaints.end());
    
    for(ll x=0; x<m; x++){
        cin >> yourpaint;
        low1 = lower_bound(arrpaints.begin(), arrpaints.end(), yourpaint);
        
        if(low1-arrpaints.begin() == arrpaints.size())
            total += yourpaint - arrpaints.at(low1-arrpaints.begin()-1);
        else
            total += yourpaint - arrpaints.at(low1-arrpaints.begin());
    }
    
    cout << abs(total);
    
    return 0; 
} 
