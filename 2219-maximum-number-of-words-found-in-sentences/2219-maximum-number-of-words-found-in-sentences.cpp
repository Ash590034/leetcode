class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        int maxi=0;
        for(auto it: sentences){
            ans=count(it.begin(),it.end(),' ')+1;
            maxi=max(maxi,ans);
        }
        return maxi;
        
    }
};