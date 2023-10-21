class Solution {
public:
    int countSubstrings(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int s1=i;
            int s2=i;
            while(s1>=0 && s2<s.size()){
                if(s[s1]==s[s2]) ans++;
                else break;
                s1--;
                s2++;
            }
            s1=i;
            s2=i+1;
            while(s1>=0 && s2<s.size()){
                if(s[s1]==s[s2]) ans++;
                else break;
                s1--;
                s2++;
            }


        }
        return ans;
        
    }
};