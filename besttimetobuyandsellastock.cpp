class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0;
        int right=1;
        int maxprofit=0;
        int profit=0;
        while(right<prices.size()){
            profit = prices[right]-prices[left];
            if(profit>maxprofit){
                maxprofit=profit;
            }
            if(prices[left]>prices[right]){
                left++;
            }
            else{
                right++;
            }
        }
        return maxprofit;
    }
};