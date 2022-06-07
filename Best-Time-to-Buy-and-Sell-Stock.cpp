// Problem link : https://www.codingninjas.com/codestudio/problems/stocks-are-profitable_893405?topList=striver-sde-sheet-problems&leftPanelTab=0

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices)
{
    int min_price = prices[0];
    int max_profit = 0;
    for(int i=1; i<prices.size(); i++)
    {
        min_price = min(min_price,prices[i]);
        max_profit = max(max_profit, prices[i]-min_price);
    }
    return max_profit;
}

// Time Complexity : O(n)
// Space Complexity : O(1)
