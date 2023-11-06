class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0,
        count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R') count++;
            else count--;

            if(i!=0 && count==0) ans++;
        }
        return ans;
        
    }
};