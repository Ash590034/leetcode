class Solution {
public:
int rev(int n){
    int ans=0;
    while(n){
        ans=ans*10+n%10;
        n=n/10;
    }
    return ans;
}
    bool isSameAfterReversals(int num) {
        int n=num;
        if(rev(rev(n))==num) return true;
        return false;
        
    }
};