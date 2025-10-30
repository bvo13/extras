class MinStack {
public:
    MinStack() {
        
    }
stack<int> values;
stack<int> minstack;
    
    void push(int val) {
       values.push(val);
       if(minstack.empty()){
        minstack.push(val);
       }
       else{
        if(minstack.top()>=val){
            minstack.push(val);
        }
       }

    }
    
    void pop() {
        if(values.top()==getMin()){
            minstack.pop();
        }
        values.pop();
    }
    
    int top() {
        return values.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};