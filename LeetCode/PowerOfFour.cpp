class Solution {
public:
    bool isPowerOfFour(int n) {
        for (int x = 0; x <= 15; x++){
            int ans = pow(4,x);
            if(ans==n)
            {
                return true;
            }
        }
        return false;
    }
};