// Problem link : https://www.codingninjas.com/codestudio/problems/return-subsets-sum-to-k_759331?topList=striver-sde-sheet-problems&leftPanelTab=1

void subset(int i, int target, vector<int> &ds, vector<vector<int>> &ans, vector<int> &arr)
{
    if(i == arr.size())
    {
        if(target == 0)
            ans.push_back(ds);
        return;
    }
    ds.push_back(arr[i]);
    subset(i+1, target-arr[i], ds, ans, arr);
    ds.pop_back();
    subset(i+1, target, ds, ans, arr); 
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<int> ds;
    vector<vector<int>> ans;
    subset(0, k, ds, ans, arr);
    sort(ans.begin(), ans.end());
    return ans;
}

// Time Complexity : O(2^n)
// Space Complexity : O(n)
