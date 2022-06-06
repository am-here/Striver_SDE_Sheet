bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char> S;
    for(auto i: s)
    {
        if(i=='{' or i=='[' or i=='(')
        {
            S.push(i);
        }
        else
        {
            if(S.empty())
                return false;
            if((S.top()=='{' and i=='}') or (S.top()=='[' and i==']') or (S.top()=='(' and i==')'))
                S.pop();
            else
                return false;
        }
    }
    return (S.empty())?true:false;          
}