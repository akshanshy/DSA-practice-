class Solution {
public:
    bool canAliceWin(int n) {
        bool invert=false;
        for(int i=10;i>=1;i--){
            if(n>=i){
                n=n-i;
                invert =!invert;
            }
            else break;
        }
        return invert;
    }
};