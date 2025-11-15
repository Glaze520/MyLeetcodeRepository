class Solution {
public:
    int tribonacci(int n) {
        int b = 1, c = 1, d = 2;
        if (n == 0)
            return 0;
        if (n == 1 || n == 2)
            return 1;
        for (int i = 4; i <= n; i++){
            int temp = b;
            b = c;
            c = d;
            d = temp + b + c;
        }
        return d;
    }
};
