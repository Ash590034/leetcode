class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int el=0,dig=0;
        for(int i=0;i<nums.size();i++){
            el+=nums[i];
            int copy=nums[i];
            while(copy!=0){
                dig+=copy%10;
                copy/=10;
            }
        }
        return abs(el-dig);
        
    }
};