// Problem link : https://www.codingninjas.com/codestudio/problems/valid-parenthesis_795104?topList=striver-sde-sheet-problems&leftPanelTab=1

bool isValidParenthesis(string expression)
{
    stack<char> st;
    for(int i=0; i<expression.length(); i++)
    {
        if(expression[i] == '[' || expression[i] == '(' || expression[i] == '{')
            st.push(expression[i]);
        else if(!st.empty())
        {
            if((st.top() == '(' && expression[i] == ')') || (st.top() == '{' && expression[i] == '}') || (st.top() == '[' && expression[i] == ']'))
                st.pop();
            else
                return false;
        }  
        else
            return false;
    }
    if(!st.empty())
        return false;
    return true;
}

// Time Complexity : O(n)
// Space Complexity : O(1)
