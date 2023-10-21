#include <bits/stdc++.h>
class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.size();
        int n=needle.size();
        int flag=0;
        int index=-1;

        

        for(int i=0;i<h;i++){
            int k=0;
            if(haystack[i]==needle[k]){
                flag=1;
                index=i;
                k++;
                for(int j=i+1;j<i+n;j++){
                    if(haystack[j]!=needle[k]){
                        
                        break;
                    }
                    else flag+=1;
                    k++;
                }
                

            }
            if (flag==n) return index;
            
        }
        return -1;
        
        
    }
};