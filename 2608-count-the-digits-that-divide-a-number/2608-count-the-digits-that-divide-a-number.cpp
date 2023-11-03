class Solution {
public:
    int countDigits(int num) {
        int ans=0;
        int copy=num;
        while(num){
            int dig=num%10;
            if(copy%dig==0) ans++;
            num/=10;
        }
        return ans;
        
    }
};