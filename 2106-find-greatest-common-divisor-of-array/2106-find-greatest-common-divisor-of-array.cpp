class Solution {
public:
int gcd(int a ,int b){
    while(a>0 && b>0){
         a>b ? a-=b:b-=a;
    }
    return a==0 ? b:a;
}
    int findGCD(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        return gcd(maxi,mini);

        
    }
};