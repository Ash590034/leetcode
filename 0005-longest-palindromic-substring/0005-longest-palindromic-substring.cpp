class Solution {
public:
bool isPalindrome(string &s,int i,int j){
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
    string longestPalindrome(string s) {
       
        string ans="";
        for(int i=0;i<s.size();i++){
            for(int j=s.size()-1;j>=i;j--){
                
                if(isPalindrome(s,i,j)){
                    string t=s.substr(i,j+1-i);
                    ans=t.size()>ans.size() ? t:ans;
                }
            }
        }
        return ans;
        
        
    }
};