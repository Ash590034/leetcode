#include <bits/stdc++.h>
class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        int i=0;
        while(i<s.size()){
            if(ans.length()==0) ans.push_back(s[i]);
            else{
                if(ans[ans.length()-1]==s[i]) ans.pop_back();
                else ans.push_back(s[i]);
            }
            i++;
        }
        
        return ans;
        
    }
};