class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> indices;
        vector<int> days(temperatures.size());
        for(int i=0; i<temperatures.size();i++){
                while(!indices.empty()&&temperatures.at(indices.top())<temperatures.at(i)){
                    days.at(indices.top()) = i-indices.top();
                    indices.pop();
                }
                indices.push(i);
            }
        
        return days;
    }
};