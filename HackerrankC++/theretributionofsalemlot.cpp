#include <bits/stdc++.h>

using namespace std;
  
typedef unsigned long long int ull;

bool sorter(const pair<ull,ull> &a, const pair<ull, ull> &b) {
    if (a.first == b.first) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}
  
int main() 
{ 
    ull l, n;
    vector< pair<ull,ull> > bari;

    cin >> l >> n;

    for(ull x=0; x<n; x++){
        ull left, right;
        cin >> left >> right;

        bari.push_back( make_pair(left,right) );
    }

    sort(bari.begin(), bari.end(), sorter);

    ull result = 0;
    ull cur = 1;
    bool possible = true;

    for (ull i = 0, sz = bari.size(); i < sz; i++) {
        if (cur > l) 
            break;

        if (bari[i].first <= cur) {
            result++;

            for (ull j = i+1; j < sz; j++) {
                if (bari[j].first <= cur && bari[j].second > bari[i].second)
                    i = j;
                else if (bari[j].first > cur)
                    break;
            }

            cur = bari[i].second+1;
        } else {
            possible = false;
            break;
        }
    }

    if(cur-1 < l || !possible)
        cout << "'Salem's Lot is doomed.";
    else
        cout << n - result << endl;

    return 0; 
} 
