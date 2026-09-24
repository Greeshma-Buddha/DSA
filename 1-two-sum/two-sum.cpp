class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         map<int , int>mp;
        int n=nums.size();int rem;int el;
        for(int i=0;i<n;i++){
            el=nums[i];
            rem=target-el;
            if(mp.find(rem)!=mp.end()) return {mp[rem],i};
            mp[el]=i;
        }
     return {-1,-1};
    }
};