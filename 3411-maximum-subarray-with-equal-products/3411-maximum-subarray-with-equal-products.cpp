class Solution {
public:
    long long gcd(long long a, long long b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    long long lcm(long long a, long long b) {
        return a / gcd(a, b) * b;
    }

    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;

        for (int i = 0; i < n; i++) {
            long long g = nums[i];
            long long l = nums[i];
            long long p = nums[i];

            for (int j = i + 1; j < n; j++) {
                g = gcd(g, nums[j]);
                l = lcm(l, nums[j]);
                p *= nums[j];

                if (p == g * l) {
                    ans = max(ans, j - i + 1);
                }
                if (p > g * l) {
                    break;
                }
            }
        }
        return ans;
    }
};
