class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr;
        for(int i=0;i<2*n;i++){
            if(i<n)  arr.push_back(nums[i]);
            else arr.push_back(nums[i-n]);
        }
        return arr;
        
    }
};