// Problem link : https://www.codingninjas.com/codestudio/problems/pair-sum_697295?topList=striver-sde-sheet-problems&leftPanelTab=1

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    int i=0, j=1;
    while(i<arr.size()-1)
    {
        j=i+1;
        vector<int> v(2);
        while(j<arr.size())
        {
            if(s-arr[i] == arr[j])
            {
                v[0] = arr[i], v[1] = arr[j];
                ans.push_back(v);
            }
            else if(arr[j] > s-arr[i])
                break;
            j++;
        }
        i++;
    }
    return ans;
}

// Time Complexity : O(n*log n)
// Space Complexity : O(1)
