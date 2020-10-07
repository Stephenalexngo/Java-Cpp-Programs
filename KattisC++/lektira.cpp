#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void check(string word, string& best, int x, int y) {
    reverse(word.begin(), word.begin()+x);
    reverse(word.begin()+x, word.begin()+y);
    reverse(word.begin()+y, word.end());

    if(word < best) {
        best = word;
    }
}

int main() {
    string word;
    cin >> word;

    string best = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    for(int x = 1; x < word.size()-1; x++) {
        for(int y = x + 1; y < word.size(); y++) {
            check(word, best, x, y);
        }
    }

    cout << best << endl;
}
