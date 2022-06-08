// Problem link : https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055?topList=striver-sde-sheet-problems&leftPanelTab=0

void sort012(int *arr, int n)
{
    int low=0, mid=0, high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
            swap(arr[low++],arr[mid++]);
        else if(arr[mid]==1)
            mid++;
        else
            swap(arr[mid], arr[high--]);
    }
}

// Time Complexity : O(n)
// Space Complexity : O(1)
