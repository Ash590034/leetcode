class Solution {
public:
    string reverseWords(string s) {
        vector <string> str;
        string word="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                word+=s[i];
            }
            else{
                if(word.size()!=0) str.push_back(word);
                word="";
            }
        }
        if(word.size()!=0) str.push_back(word);
        string ans="";
        for(int i=str.size()-1;i>=0;i--){
            ans+=str[i]+' ';
        }
        return ans.substr(0,ans.size()-1);


        
    }
};