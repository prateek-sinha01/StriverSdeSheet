// Problem link : https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        if(s=="")
            return 0;
        int c=1, i=0, j=1, ans=1;
        unordered_map<char,int> mp;
        mp[s[0]]=0;
        while(j<s.length())
        {
            if(mp.find(s[j])==mp.end() || mp[s[j]]<i)
            {
                c++;
                if(c>ans)
                    ans=c;
            }
            else if(mp[s[j]] >=i)
            {
                i=mp[s[j]]+1;
                c=j-i+1;
            }
            mp[s[j]]=j;
            j++;
        }
        return ans;
    }
};

// Time Complexity : O(n)
// Space Complexity : O(1)
