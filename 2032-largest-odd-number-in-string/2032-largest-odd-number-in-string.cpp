#include <bits/stdc++.h>
class Solution {
public:
string printStr(string s,int i,int j){
    string ans="";
    for(int k=i;k<=j;k++){
        ans+=s[k];

    }
    return ans;
}

    string largestOddNumber(string num) {
        for(int i=num.size()-1;i>=0;i--){
            if((num[i]-'0')%2==1) return printStr(num,0,i);
        }
        return "";
        
        
    }
};