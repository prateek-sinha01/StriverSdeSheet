// Problem link : https://leetcode.com/problems/unique-paths/

class Solution {
public:
    int path(int m, int n, vector<vector<int>> &dp)
    {
        if(m==0 && n==0)
            return 1;
        if(m<0 || n<0)
            return 0;
        if(dp[m][n]!=-1)
            return dp[m][n];
        int l=0, d=0;
        l = path(m, n-1, dp);
        d = path(m-1, n, dp);
        return dp[m][n] = l+d;
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n,-1));
        return path(m-1, n-1, dp);
    }
};

// Time Complexity : O(m*n)
// Space Complexity : O(m*n)
