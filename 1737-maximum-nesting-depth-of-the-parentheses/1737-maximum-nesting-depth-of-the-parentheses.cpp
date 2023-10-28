class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int maxi=0;
        for(auto str:s){
            if(str=='('){
                 ans++;
                 maxi=max(maxi,ans);
            }
            else if(str==')') ans--;
        }
        return maxi;
        
    }
};