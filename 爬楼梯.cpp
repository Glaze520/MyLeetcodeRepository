class Solution {
public:
    int climbStairs(int n) {
        int b = 2, c = 3;
        if (n <= 2)
            return n;
        for (int i = 4; i <= n; i++){
            int a = b;
            b = c;
            c = a + b;
        }
        return c;
    }
};
