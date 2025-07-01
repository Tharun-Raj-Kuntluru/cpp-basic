#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int possibleStringCount(string word) {
        int count = 1;
        int n = word.length();
        for(int i = 0; i<n-1; ++i){
            if(word[i]==word[i+1]) count++;
        }
        return count;
    }
};
int main(){
    string word;
    cout<<"Enter your string: "<<endl;
    cin>>word;
    Solution sol;
    cout<<"Total number of possible original strings = "<<sol.possibleStringCount(word)<<endl;
    return 0;
}