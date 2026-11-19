class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int first=nums[n-1]-nums[2];
        int second=nums[n-3]-nums[0];
        int third=nums[n-2]-nums[1];
        return min({first,second,third});
    }
};