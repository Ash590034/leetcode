class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> mpp;
        for(auto it: stones){
            mpp[it]++;
        }
        int ans=0;
        for(auto it:jewels){
            ans+=mpp[it];
        }
        return ans;

        
    }
};