// Problem link : https://leetcode.com/problems/roman-to-integer/

class Solution {
public:
    int romanToInt(string s) {
        int num = 0, last = 0, len = s.length();
        for(int i=len-1; i>=0; i--)
        {
            switch(s[i])
            {
                case 'I' :  if(last>1)
                                num-=1;
                            else
                                num+=1;
                            last = 1;
                            break;
                case 'V' :  num+=5;
                            last = 5;
                            break;
                case 'X' :  if(last>10)
                                num-=10;
                            else
                                num+=10;
                            last = 10;
                            break;
                case 'L' :  num+=50;
                            last = 50;
                            break;
                case 'C' :  if(last>100)
                                num-=100;
                            else
                                num+=100;
                            last = 100;
                            break;
                case 'D' :  num+=500;
                            last = 500;
                            break;
                case 'M' :  num+=1000;
                            last = 1000;
                            break;        
            }
        }
        return num;
    }
};

// Time Complexity : O(n)
// Space Complexity : O(1)
