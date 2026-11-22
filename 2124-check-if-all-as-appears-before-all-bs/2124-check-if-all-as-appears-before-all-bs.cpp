class Solution {
public:
    bool checkString(string s) {
        int n=s.size();
        int a=-2;
        int b=-1;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='a'){
                a=i;
                break;
            }
            else a=INT_MIN;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                b=i;
                break;
            }
            else b=INT_MAX;
        }
        return a<b;
    }
};