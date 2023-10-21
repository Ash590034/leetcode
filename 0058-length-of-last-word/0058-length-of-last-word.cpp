class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int len=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' ') len++;
            if(len!=0 && s[i]==' ') break;

        }
        return len;

        
    }
};