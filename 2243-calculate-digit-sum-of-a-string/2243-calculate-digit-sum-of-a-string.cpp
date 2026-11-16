class Solution {
public:
    string digitSum(string s, int k) {    
        while (s.size() > k) {
            string m = "";
            int n=s.size(); 
            int current_sum=0;
            for (int i=0;i<n;i++) {
                current_sum +=s[i]-'0';
                if ((i+1) % k ==0||i==n-1) {
                    m+=to_string(current_sum);
                    current_sum=0; 
                }
            }
            s=m; 
        }
        return s;
    }
};
