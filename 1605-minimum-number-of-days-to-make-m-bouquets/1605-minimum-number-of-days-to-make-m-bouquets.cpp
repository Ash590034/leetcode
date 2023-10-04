class Solution {
public:
vector<int> findMinMax(vector<int>& arr){
    vector<int> ans;
    int mini=INT_MAX,maxi=INT_MIN;
    for(int i=0;i<arr.size();i++){
        mini=min(arr[i],mini);
        maxi=max(arr[i],maxi);
    }
    ans.push_back(mini);
    ans.push_back(maxi);
    return ans;



}
int bouquets(vector<int> &arr,int mid,int k){
    int count=0;
    int ans=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=mid){
            count++;
        }
        else{
            ans+=count/k;
            count=0;
        }  
        



    }
    ans+=count/k;
    return ans;
    
}
    int minDays(vector<int>& arr, int m, int k) {
        long long n=arr.size();
        if(n<(long long)m*(long long)k) return -1;
        vector<int> minmax=findMinMax(arr);
        int low=minmax[0];
        int high=minmax[1];
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(bouquets(arr,mid,k)>=m){
                 high=mid-1;
                 ans=mid;
            }
            else low=mid+1;

        }
        return ans;

        
    }
};