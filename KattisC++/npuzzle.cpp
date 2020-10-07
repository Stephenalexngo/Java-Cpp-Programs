#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll manhattan(int x1, int y1, int x2, int y2) {
    return abs(x1-x2) + abs(y1-y2);
}

ll getDistance(char c, int i, int j) {
    switch(c) {
        case 'A':
            return manhattan(0, 0, i, j);
            break;
        case 'B':
            return manhattan(1, 0, i, j);
            break;
        case 'C':
            return manhattan(2, 0, i, j);
            break;
        case 'D':
            return manhattan(3, 0, i, j);
            break;
        case 'E':
            return manhattan(0, 1, i, j);
            break;
        case 'F':
            return manhattan(1, 1, i, j);
            break;
        case 'G':
            return manhattan(2, 1, i, j);
            break;
        case 'H':
            return manhattan(3, 1, i, j);
            break;
        case 'I':
            return manhattan(0, 2, i, j);
            break;
        case 'J':
            return manhattan(1, 2, i, j);
            break;
        case 'K':
            return manhattan(2, 2, i, j);
            break;
        case 'L':
            return manhattan(3, 2, i, j);
            break;
        case 'M':
            return manhattan(0, 3, i, j);
            break;
        case 'N':
            return manhattan(1, 3, i, j);
            break;
        case 'O':
            return manhattan(2, 3, i, j);
            break;
    }
}

int main() {
    ll sum = 0;
    
    for(int x = 0; x < 4; x++) {
        for(int y = 0; y < 4; y++) {
            char letter;
            cin >> letter;
            if(letter != '.') {
                sum += getDistance(letter, y, x);
            }
        }
    }
    cout << sum << endl;
}
