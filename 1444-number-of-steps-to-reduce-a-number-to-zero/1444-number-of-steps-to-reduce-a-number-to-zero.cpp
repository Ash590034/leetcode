class Solution {
public:
    int numberOfSteps(int num) {
        int ans=0;
        while(num){
            if(num%2==0){
                num/=2;
                ans++;
            }
            else{
                ans++;
                num-=1;
            }
        }
        return ans;
        
    }
};