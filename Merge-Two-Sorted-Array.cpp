// Problem link : https://www.codingninjas.com/codestudio/problems/ninja-and-sorted-arrays_1214628?topList=striver-sde-sheet-problems&leftPanelTab=1

#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) 
{
    int i=0, j=0;
    while(i<m+n && j<n)
    {
        if(arr1[i]!=0 && arr1[i] <= arr2[j])
            i++;
        else
        {
            arr1.pop_back();
            arr1.insert(arr1.begin()+i, arr2[j]);
            i++,j++;
        }
    }
    return arr1;
}

// Time Complexity : O(m+n)
//Space Complexity : O(1)
