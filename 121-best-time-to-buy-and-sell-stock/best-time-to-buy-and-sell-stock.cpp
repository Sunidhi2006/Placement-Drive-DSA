class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();
        int brr[n];
        int max = -1;
        brr[n-1] = prices[n-1];
        for(int i=n-1;i>0;i--){
            if(prices[i]>max){
                brr[i-1] = prices[i];
                max = prices[i];
            }
            else{
                brr[i-1] = max;
            }
        }
        for(int i=0;i<prices.size();i++){
                if(profit < (brr[i]-prices[i])){
                    profit = (brr[i]-prices[i]);
                }
        }
        return profit;
    }
};