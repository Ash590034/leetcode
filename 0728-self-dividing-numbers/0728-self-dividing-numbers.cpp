class Solution {
public:
bool selfDiv(int m){
    int copy=m;
    while(m){
        if(m%10==0) return false;
        if(copy%(m%10)!=0 ) return false;
        m/=10;
    }
    return true;
}
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            if(selfDiv(i)) ans.push_back(i);

        }
        return ans;

        
    }
};