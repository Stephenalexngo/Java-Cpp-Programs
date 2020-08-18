#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Peeps 
{ 
    public: 
  
    ll numpeep, numspot, precom; 
};

struct CustomCompare
{
    bool operator()(Peeps const& lhs, Peeps const& rhs)
    {
        return lhs.precom < rhs.precom;
    }
};

int main() {
    ll p, n, num;
    priority_queue<Peeps, vector<Peeps>, CustomCompare> arr;
    cin >> p >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        Peeps peep;
        peep.numpeep = num;
        peep.numspot = 1;
        peep.precom = ceil(peep.numpeep / double(peep.numspot));
        arr.push(peep);
    }
    
    ll rem = p-n;
    
    for(int x=0; x<rem; x++){
        // priority_queue<pair<ll, ll>, vector<pair<ll,ll>>, CustomCompare> temp = arr;
        // while(!temp.empty()){
        //     cout << "TOP = " << temp.top().first << " === SECOND = " << temp.top().second << endl;
        //     temp.pop();
        // }
        
        Peeps p = arr.top();
        arr.pop();
        p.numspot += 1;
        p.precom = ceil(p.numpeep / double(p.numspot));
        arr.push(p);
    }

    cout << arr.top().precom << endl;
    
    return 0;
}