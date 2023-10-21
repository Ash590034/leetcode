class Solution {
public:
bool checkPalindrome(string s,int i,int j){
    while(i<=j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;

            }
            else return checkPalindrome(s,i,j-1) || checkPalindrome(s,i+1,j);

        }
        return 1;

        
       
        
    }
};