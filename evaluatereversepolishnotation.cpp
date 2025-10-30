class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> operands;
        for(string s:tokens){
            int second=0;
            int first=0;
            if(s=="+"||s=="-"||s=="*"||s=="/"){
                second = operands.top();
                operands.pop();
                first = operands.top();
                operands.pop();
            }
            else{
                operands.push(stoi(s));
            }
            if(s=="+"){
                operands.push(first+second);
            }
            if(s=="-"){
                operands.push(first-second);
            }
            if(s=="*"){
                operands.push(first*second);
            }
            if(s=="/"){
                operands.push(first/second);
            }
        }
        return operands.top();
    }
};