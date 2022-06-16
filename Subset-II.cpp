// Problem link : https://www.codingninjas.com/codestudio/problems/unique-subsets_3625236?topList=striver-sde-sheet-problems&leftPanelTab=1

#include<bits/stdc++.h>
void subset(int i, vector<int> &v, vector<vector<int>> &ans, vector<int> &arr)
{
    if(i==arr.size())
    {
        ans.push_back(v);
        return;
    }
    int num = arr[i++];
    v.push_back(num);
    subset(i, v, ans, arr);
    v.pop_back();
    while(i<arr.size() && arr[i] == num)
        i++;
    subset(i, v, ans, arr);
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    vector<int> v;
    vector<vector<int>> ans;
    subset(0, v, ans, arr);
    sort(ans.begin(), ans.end());
    return ans;
}

// Time Complexity : O(2^n)
// Space Complexity : O(n)
