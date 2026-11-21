class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int zeroCount = 0;
        long long totalProduct = 1;

        for (int num : nums) {
            if (num == 0) zeroCount++;
            else totalProduct *= num;
        }

        vector<int> result(n, 0);

        if (zeroCount > 1) return result; 
        if (zeroCount == 1) {
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0)
                    result[i] = totalProduct;
            }
            return result;
        }

        
        for (int i = 0; i < n; i++) {
            result[i] = totalProduct / nums[i];
        }

        return result;
    }
};
