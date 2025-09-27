class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n+1, INT_MAX);
        dp[0] = 0; 

        for (int i = 0; i <= n; i++) {
            for (int step = 1; step <= 3; step++) {
                int j = i + step;
                if (j <= n) {
                   
                    dp[j] = min(dp[j], dp[i] + costs[j-1] + step*step);
                }
            }
        }

        return dp[n];
    }
};
