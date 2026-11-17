class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        int l=k-1,r=a.size()-1,sum=0;
        for(int i=0;i<k;i++){
            sum+=a[i];
        }
        int maxsum=sum;
        while(l>=0){
            sum-=a[l]; l--;
            sum+=a[r]; r--;
            maxsum=max(maxsum,sum);
        }
        return maxsum;
        
    }
};