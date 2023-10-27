class Solution {
public:
    string convert(string s, int n) {
        if(n==1) return s;

        vector<string> str(n);
        bool dir=1;
        int row=0;
        int i=0;

        while(true){
            if(dir){
                while(row<n && i<s.size()){
                    str[row++].push_back(s[i++]);

                }
                row-=2;
            }
            else{
                 while(row>=0 && i<s.size()){
                    str[row--].push_back(s[i++]);

                }
                row=1;

            }
            if(i>=s.size()) break;
            dir=!dir;


        }

        string ans="";
        for(auto it:str){
            ans+=it;
        }
        return ans;
        

        
    }
};