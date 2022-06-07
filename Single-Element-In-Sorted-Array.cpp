// Problem link : https://www.codingninjas.com/codestudio/problems/unique-element-in-sorted-array_1112654?topList=striver-sde-sheet-problems&leftPanelTab=0

int uniqueElement(vector<int> arr, int n)
{
    int x = 0;
    for(int i=0; i<n; i++)
    {
        x^=arr[i];
    }
    return x;
}

// Time Complexity : O(n)
// Space Complexity : O(1)
