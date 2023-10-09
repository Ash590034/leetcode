class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int el;
        for (int i=0;i<n;i++){
            el=nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j]==el) count++;

            }
        }
        return count;
        
    }
};