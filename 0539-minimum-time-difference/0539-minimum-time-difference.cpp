#include<bits/stdc++.h>
class Solution {
public:
    int findMinDifference(vector<string>& arr) {
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            string s=arr[i];
            int hours=stoi(s.substr(0,2));
            int mins=stoi(s.substr(3,2));
            ans.push_back(hours*60 + mins);

        }
        
        sort(ans.begin(),ans.end());
        int mini=1440-(ans[arr.size()-1]-ans[0]);
        for(int i=1;i<ans.size();i++){
            mini= min(ans[i]-ans[i-1],mini);
        }
        return mini;

        
    }
};