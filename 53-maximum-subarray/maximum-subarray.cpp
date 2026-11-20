class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n,0);
        result[0]=nums[0];
        int maxi=result[0];
        for(int i=1;i<n;i++){
            result[i]=max(nums[i],nums[i]+result[i-1]);
            maxi=max(maxi,result[i]);
        }
        return maxi;
    }
};