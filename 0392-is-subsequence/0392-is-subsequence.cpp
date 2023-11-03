class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0) return true;
        int i=0,j=0;
        while(j<t.size()){
            if(s[i]==t[j]){
                
                i++;
                j++;
                if(i==s.size()) return true;
            }
            else{ j++;}
        }
        return false;
        
    }
};