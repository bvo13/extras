class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> complements;
        vector<int> solution;
        int complement;
        for(int i=0;i<nums.size();i++){
            complement = target - nums[i];
            if(complements.contains(complement)){
                int index = complements.at(complement);
                solution.push_back(index);
                solution.push_back(i);
                break;
            }
            else{
                complements.insert({complement,i});
            }
        }
        return solution;
    }
};