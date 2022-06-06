// Problem link : https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-sorted-array_1102307?topList=striver-sde-sheet-problems&leftPanelTab=0

int removeDuplicates(vector<int> &arr, int n) 
{
    int num = arr[0], ans = 1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]!=num)
        {
            ans++;
            num=arr[i];
        }
    }
    return ans;
}

// Time Complexity : O(n)
// Space Complexity : O(1)
