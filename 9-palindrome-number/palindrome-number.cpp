class Solution {
public:
    bool isPalindrome(int x) {
        vector<int>a;
        if(x<0) return false;
        while(x){
            a.push_back(x%10);
            x=x/10;
        }
        int l=0,r=a.size()-1;
        while(l<r){
            if(a[l]!=a[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};