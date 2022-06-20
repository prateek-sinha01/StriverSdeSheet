// Problem link : https://leetcode.com/problems/minimum-path-sum/

class Solution {
public:
    int path(int m, int n, vector<vector<int>> &dp, vector<vector<int>> &grid)
    {
        if(m==0 && n==0)
            return grid[0][0];
        else if(m<0 || n<0)
            return INT_MAX;
        if(dp[m][n]!=-1)
            return dp[m][n];
        int l = path(m, n-1, dp, grid);
        int d = path(m-1, n, dp, grid);
        return dp[m][n] = grid[m][n] + min(l,d);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return path(m-1, n-1, dp, grid);
    }
};

// Time Complexity : O(m*n)
// Space Complexity : O(m*n)
