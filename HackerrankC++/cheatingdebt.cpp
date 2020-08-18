#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cl=0;
    unsigned long long int k;
    stack<char> nums;
    string num,ans = "";
    
    cin >> n >> k;
    cin >> num;
    
    for(int i = 0; i < n; i++){
        if(nums.empty()){
            nums.push(num[i]);
            cl = num[i];
        }
        else{
            if(num[i] != '0' && num[i] < cl && nums.size() <= k){
                while(!nums.empty()){
                    nums.pop();
                    k--;
                }
                nums.push(num[i]);
                cl = num[i];
            }
            else if(num[i] >= nums.top())
                nums.push(num[i]);
            else{
                while(k != 0 && !nums.empty() && num[i] < nums.top()){
                    if(num[i] == '0'){
                        if(nums.size() == 1)
                            break;
                        else{
                            nums.pop();
                            k--;    
                        }
                    }
                    else{
                        if(num[i] < cl)
                            cl = num[i];
                        nums.pop();
                        k--;    
                    }
                }
                nums.push(num[i]);
            }
        }
    }
    
    while(k != 0){
        nums.pop();
        k--;    
    }
    
    while(!nums.empty()){
        ans = nums.top() + ans;    
        nums.pop();
    }
    
    cout << ans;
}