// Problem link : https://www.codingninjas.com/codestudio/problems/majority-element_842495?topList=striver-sde-sheet-problems&leftPanelTab=1

int findMajorityElement(int arr[], int n) 
{
    int m = arr[0], c = 1;
    for(int i=1; i<n; i++)
    {
        if(arr[i] == m)
            c++;
        else
            c--;
        if(c==0)
        {
            m = arr[i];
            c = 1;
        }
    }
    c = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == m)
            c++;
    }
    if(c>n/2)
        return m;
    else
        return -1;
}

// Time Complexity : O(n)
// Space Complexity : O(1)
