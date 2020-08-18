// Group Members - Karl King, Lenard Balwin To

#include <bits/stdc++.h>

using namespace std;

pair<vector<long long>, long long> parti(vector<long long> movies, long long start, long long end){
    long long pivot = movies[start], green = start, orange = start + 1;

    while(orange<=end){
        if(movies[orange] < pivot){
            green++;
            swap(movies[green], movies[orange]);
        }
        orange++;
    }

    swap(movies[green], movies[start]);

    return make_pair(movies, green);
}

long long quicksort(vector<long long> movies, long long start, long long end, long long index){
    pair<vector<long long>, long long> p = parti(movies, start, end);
    
    vector<long long> newmovies = p.first;
    long long partition_point = p.second;
    
    if(index == partition_point)
        return newmovies[partition_point];
    else if(index < partition_point)
        return quicksort(newmovies, start, partition_point - 1, index);
    else
        return quicksort(newmovies, partition_point + 1, end, index);
}

int main() {
	int q, n, s, e, a, k, r, c;
	vector<long long> arr;
	
    cin >> n;
    for(int i = 0; i < n; i++) {
        fscanf(stdin,"%d%d",&r,&c);
        arr.push_back(r-c);
    }
    
    cin >> q;
    
    for(int cc = 0; cc < q; cc++) {
        cin >> s >> e >> a >> k;
        
        vector<long long> newarr;
        newarr.assign(arr.begin()+s,arr.begin()+e+1);
        
        if(a < k)
            cout << -1 << endl;
        else{
            if(a/k > (e+1-s)){
                cout << quicksort(newarr, 0, newarr.size()-1,0) << endl;
            }
            else
                cout << quicksort(newarr, 0, newarr.size()-1, newarr.size()- (a/k)) << endl;
        }
    }
}