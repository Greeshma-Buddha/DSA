class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int maxlen=0,r=0,l=0,hash[256]={0},n=s.length();
     while(r<n){
        if(hash[s[r]]==1){
            
            hash[s[l]]--;
            l++;
           
        }
        else{
            hash[s[r]]++;
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        
     }   
     return maxlen;
    }
};