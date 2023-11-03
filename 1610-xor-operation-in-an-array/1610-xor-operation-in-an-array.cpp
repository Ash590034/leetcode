class Solution {
public:
    int xorOperation(int n, int start) {
        // int array[n] ;
        int xori=0;
        for(int i=0;i<n;i++){
            // array[i]=start+2*i;
            xori^=start+2*i;

        }
        return xori;

        
    }
};