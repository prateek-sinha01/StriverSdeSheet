// Problem link : https://www.codingninjas.com/codestudio/problems/combination-sum-ii_1112622?topList=striver-sde-sheet-problems&leftPanelTab=0

#include<algorithm>
void combSum(int i, int target, vector<int> &ds, vector<vector<int>> &ans, vector<int> &arr)
{
    if(target == 0)
    {
        ans.push_back(ds);
        return;
    }
    if(i>=arr.size() || target<0)
        return;
    int num = arr[i++];
    if(num<=target)
    {
        ds.push_back(num);
        combSum(i, target-num, ds, ans, arr);
        ds.pop_back();
    }
    while(i<arr.size() && arr[i] == num)
        i++;
    combSum(i, target, ds, ans, arr);
}

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
    vector<int> ds;
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    combSum(0, target, ds, ans, arr);
    sort(ans.begin(), ans.end());
    return ans;
}

// Time Complexity : O(2^n)
// Space Complexity : O(n)
