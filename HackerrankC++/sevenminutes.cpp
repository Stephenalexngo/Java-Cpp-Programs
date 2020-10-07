#include <bits/stdc++.h>

using namespace std;
  
typedef long long ll;

int main() 
{ 
    string str;
    getline(cin, str);
      
    string word = ""; 
       
    for (int i = 0, len = str.size(); i < len; i++) 
    { 
        if (ispunct(str[i])) 
        { 
            str.erase(i--, 1); 
            len = str.size(); 
        } 
    } 
    
    transform(str.begin(), str.end(), str.begin(), ::tolower); 
    
    map<string, int> M; 
  
    for (int i = 0; i < str.size(); i++) { 
  
        if(str[i] == ' ') { 
  
            if (M.find(word) == M.end()) { 
                M.insert(make_pair(word, 1)); 
                word = ""; 
            } 
  
            else { 
                M[word]++; 
                word = ""; 
            } 
        } 
        else
            word += str[i]; 
    } 
  
    if (M.find(word) == M.end()) 
        M.insert(make_pair(word, 1)); 
    else
        M[word]++; 
  
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    
    for (auto& it : M) {
        pq.push(it.second); 
    }
    
    ll total = 0;
    while(pq.size() != 1){
        ll temp = 0;
        total += pq.top();
        for(int x=0; x<2 && !pq.empty(); x++){
            temp += pq.top();
            pq.pop();
        }
        pq.push(temp);
    }
    
    cout << total+pq.top();
    
    return 0; 
} 
