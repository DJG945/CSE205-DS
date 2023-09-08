class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        else if(n==1){
            return true;
        }
        return !(n&1) && isPowerOfTwo(n/2);
    }
};