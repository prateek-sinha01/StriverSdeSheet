// Problem link : https://www.codingninjas.com/codestudio/problems/subset-sum_3843086?topList=striver-sde-sheet-problems&leftPanelTab=1

void subset(int i, int sum, vector<int> &ans, vector<int> &num)
{
    if(i==num.size())
    {
        ans.push_back(sum);
            return;
    }
    sum+=num[i];
    subset(i+1, sum, ans, num);
    sum-=num[i];
    subset(i+1, sum, ans, num);
}

vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int> ans;
    subset(0, 0, ans, num);
    sort(ans.begin(), ans.end());
    return ans;
}

// Time Complexity : O(2^n)
// Space Complexity : O(n)
