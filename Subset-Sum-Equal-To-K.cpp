// Problem link : https://www.codingninjas.com/codestudio/problems/subset-sum-equal-to-k_1550954?topList=striver-sde-sheet-problems&leftPanelTab=0

#include<algorithm>
bool subset(int i, int target, vector<vector<int>> &dp, vector<int> &arr)
{
    if(target == 0)
        return true;
    if(i == arr.size())
        return false;
    if(dp[i][target] != -1)
        return dp[i][target];
    if(arr[i] <= target)
    {    
        if(subset(i+1, target-arr[i], dp, arr) == true)
            return dp[i][target]=true;
    }
    if(subset(i+1, target, dp, arr) == true)
        return dp[i][target]=true;
    return dp[i][target]=false;
}

bool subsetSumToK(int n, int k, vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> dp(n+1, vector<int>(k+1, -1));
    return subset(0, k, dp, arr);
}

// Time Complexity : O(n*k)
// Space Complexity : O(n*k) + O(n)
