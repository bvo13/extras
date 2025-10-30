class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        for(char x: s){
            if(x=='('||x=='['||x=='{'){
                open.push(x);
            }
            else{
            if(open.empty()){
                return false;
            }
            else{
                char top = open.top();
                open.pop();
                if(x==')'){
                    if(top!='('){
                        return false;
                    }
                }
                if(x==']'){
                    if(top!='['){
                        return false;
                    }
                }
                if(x=='}'){
                    if(top!='{'){
                        return false;
                    }
                }
            }
            }
        }
        if(!open.empty()){
            return false;
        }
        return true;
    }
};