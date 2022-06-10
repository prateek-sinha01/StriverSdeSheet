// Problem link : https://www.codingninjas.com/codestudio/problems/find-minimum-number-of-coins_975277?topList=striver-sde-sheet-problems&leftPanelTab=0

int findMinimumCoins(int amount) 
{
    // Write your code here
    int c=0;
    int coins[9] = {1,2,5,10,20,50,100,500,1000};
    for(int i=8; i>=0; i--)
    {
        c+=amount/coins[i];
        amount%=coins[i];
    }
    return c;
}

// Time Complexity : O(1)
// Space Complexity : O(1)
