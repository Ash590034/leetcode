class Solution {
public:
long long time(vector<int>& piles,int k){
    int n=piles.size();
    long long ans=0;
    for(int i=0;i<n;i++){
        if(piles[i]%k==0) ans+=piles[i]/k;
        else ans+=(1)+piles[i]/k;
        
    }
    return ans;

}


    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        sort(piles.begin(),piles.end());
        int low=1,high=piles[n-1];
        while(low<=high){
            int mid=low+(high-low)/2;
            if(time(piles,mid)<=h) high=mid-1;
            else low=mid+1;

        }
        return low;


        
    }
};