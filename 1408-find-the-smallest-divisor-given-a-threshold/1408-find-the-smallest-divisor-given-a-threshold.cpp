class Solution {
public:

int ceiling(vector<int>& nums, int mid){
    int ans=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%mid==0) ans+=nums[i]/mid;
        else ans+=nums[i]/mid+(1);
    }
    return ans;

}
    int smallestDivisor(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=0;i<n;i++){
            maxi=max(nums[i],maxi);
            mini=min(mini,nums[i]);

        }
        int low=1,high=maxi;

        while(low<=high){
            int mid=(low+high)/2;
            if(ceiling(nums,mid)<=k) high=mid-1;
            else low=mid+1;
        }
        return low;


        
    }
};