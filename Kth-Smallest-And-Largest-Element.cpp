// Problem link : https://www.codingninjas.com/codestudio/problems/kth-smallest-and-largest-element-of-array_1115488?leftPanelTab=0

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
    sort(arr.begin(), arr.end());
    vector<int> ans(2);
    ans[0] = arr[k-1];
    ans[1] = arr[n-k];
}

// Time Complexity : O(n*logn)
// Space Complexity : O(1)
