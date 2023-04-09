class Solution {
public:
    bool isPowerOfThree(int n) {
        for (int x = 0; x <= 19; x++){
            int ans = pow(3,x);
            if(ans==n)
            {
                return true;
            }
        }
        return false;
    }
};