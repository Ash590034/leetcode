class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev=0,curr=0,ans=0;
        for(int i=0;i<bank.size();i++){
            for(auto it:bank[i]){
                if(it=='1') curr++;

            }
            ans+=prev*curr;
            if(curr!=0){
                prev=curr;
            }
            curr=0;
           

        }
        return ans;
        
    }
};