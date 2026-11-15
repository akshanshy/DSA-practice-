class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD =1e9 + 7;
        int ans =0;
        int n =arr.size();
        int evenc=1;
        int oddc=0;
        int prefixsum=0;
        for(int num :arr){
            prefixsum+=num;
            if(prefixsum%2!=0){
                ans=(ans+evenc)%MOD;
                oddc++;
            }
            else{
                ans=(ans+oddc)%MOD;
                evenc++;
            }
        }
        return ans;
    }
};
