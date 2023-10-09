class Solution {
public:
    int threeSumClosest(vector<int>& arr, int t) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        
        int mini=arr[0]+arr[1]+arr[2];
        for(int i=0;i<n-2;i++){
            int j=i+1,k=n-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(abs(sum-t)<abs(mini-t)) mini=sum;
                if(sum<t){
                    j++;
                    
                }
                else if(sum>t){
                    k--;
                    

                }
                else return t;
            }
        }
        return mini;
        
    }
};