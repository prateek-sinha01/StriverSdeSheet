// Problem link : https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_1112602?topList=striver-sde-sheet-problems&leftPanelTab=1

#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n)
{
    int sum = 0, nsum = n*(n-1)/2;
    for(int i=0; i<n; i++)
    {
        int in = abs(arr[i])-1;
        if(arr[in]<0)
            return in+1;
        else
            arr[in]*=-1;
    }
    return -1;
}

// Time Complexity : O(n)
// Space Complexity : O(1)
