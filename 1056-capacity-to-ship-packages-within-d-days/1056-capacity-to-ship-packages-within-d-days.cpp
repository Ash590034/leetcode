class Solution {
public:
int daysReq(vector<int>& arr, int cap){
    int days=1,load=0;
    for(int i=0;i<arr.size();i++){
        if(load+arr[i]>cap){
            days++;
            load=arr[i];

        }
        else load+=arr[i];

    }
    return days;
    
}
    int shipWithinDays(vector<int>& arr, int days) {
        int maxi=INT_MIN,sum=0;
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,arr[i]);
            sum+=arr[i];

        }

        int low=maxi,high=sum;
        while(low<=high){
            int mid=(low+high)/2;
            if(daysReq(arr,mid)<=days) high=mid-1;
            else low=mid+1;
        }
        return low;
        
    }
};