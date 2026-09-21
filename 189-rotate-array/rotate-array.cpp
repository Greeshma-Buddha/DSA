class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
                k=k%n;
        vector<int>a(k);
        for(int i=n-k;i<n;i++){
            a[i-n+k]=nums[i];
        }
        int j=n-1;
        for(int i=n-k-1;i>=0;i--){
            nums[j--]=nums[i];
        }
        for(int i=0;i<k;i++){
            nums[i]=a[i];
        }
    }
};