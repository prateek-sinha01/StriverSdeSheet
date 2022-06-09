// Problem link : https://www.codingninjas.com/codestudio/problems/search-in-a-2d-matrix_980531?topList=striver-sde-sheet-problems&leftPanelTab=1

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) 
{
    int i = 0, j = n-1;
    while(i<m && j>=0)
    {
        if(mat[i][j] == target)
            return true;
        else if(mat[i][j] < target)
            i++;
        else
            j--;
    }
    return false; 
}

// Time Complexity : O(n)
// Space Complexity : O(1)
