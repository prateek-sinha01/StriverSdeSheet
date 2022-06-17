// Problem link : https://www.codingninjas.com/codestudio/problems/print-permutations-string_758958?topList=striver-sde-sheet-problems&leftPanelTab=0

void permute(int ind, vector<string> &ans, string &s)
{
    if(ind == s.length())
    {
        ans.push_back(s);
        return;
    }
    for(int i=ind; i<s.length(); i++)
    {
        swap(s[i], s[ind]);
        permute(ind+1, ans, s);
        swap(s[i], s[ind]);
    }
}

vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> ans;
    permute(0, ans, s);
    return ans;
}

// Time Complexity : O(n!)
// Space Complexity : O(n)
