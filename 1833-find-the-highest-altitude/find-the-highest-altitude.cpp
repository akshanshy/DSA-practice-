class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>result(n+1);
        result[0]=0;
        int maxi=0;
        for(int i=1;i<n+1;i++){
            result[i]=gain[i-1]+result[i-1];
            maxi=max(result[i],maxi);
        }
        return maxi;
    }
};