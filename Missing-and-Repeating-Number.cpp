// Problem link : codingninjas.com/codestudio/problems/missing-and-repeating-numbers_873366?topList=striver-sde-sheet-problems&leftPanelTab=0

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    pair<int, int> p;
    int sum = 0, nsum = n*(n+1)/2;;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
	for(int i=0; i<n; i++)
    {
        int in = abs(arr[i])-1;
        if(arr[in]<0)
        {
            p.second = in+1;
            break;
        }
        else
        {
            arr[in]*=-1;
        }
    }
    sum-=p.second;
    p.first = nsum-sum;
    return p;
}

// Time Complexity : O(n)
// Space Complexity : O(1)
