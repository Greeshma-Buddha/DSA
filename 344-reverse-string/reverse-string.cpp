class Solution {
public:
    void reverseString(vector<char>& s) {
        solve(s,0);

    }
   void solve(vector<char>&s,int i){
        if(i>=s.size()/2) return;
        swap(s[i],s[s.size()-1-i]);
        solve(s,i+1);
    }
};