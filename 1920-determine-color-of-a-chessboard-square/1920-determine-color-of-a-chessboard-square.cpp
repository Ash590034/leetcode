class Solution {
public:
    bool squareIsWhite(string c) {
        int n=(c[0]-'a'+1)+(c[1]-'0');
        if(n%2==0) return false;
        return true;
        
    }
};