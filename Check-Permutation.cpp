// Problem link : https://www.codingninjas.com/codestudio/problems/check-permutation_1172164?topList=striver-sde-sheet-problems&leftPanelTab=1

bool areAnagram(string &str1, string &str2)
{
    int hsh[26] = {0};
    for(int i=0; i<str1.length(); i++)
    {
        hsh[str1[i]-'a']++;
    }
    for(int i=0; i<str2.length(); i++)
    {
        hsh[str2[i]-'a']--;
    }
    for(int i=0; i<26; i++)
    {
        if(hsh[i]!=0)
            return false;
    }
    return true;
    
}

// Time Complexity : O(m+n) where m is length of str1 and n is length of str2
// Space Complexity : O(1)
