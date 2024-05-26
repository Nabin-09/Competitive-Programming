#include<iostream>
#include<iostream>
#include<vector>
#include<algorithm>
#define pb push_back
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string res;
        string first = strs[0];
        int n = strs.size();
        string last = strs[n-1];
        for(int i = 0;i<first.length();i++){
            if(first[i]!=last[i])
            break;
            else
            res.pb(first[i]);
        }
        return res;
    }
};