class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int L = 0;
        int maximum = 0;
        
        for(int R = 1;R<prices.size();R++)
        {
            if(prices[R] >= prices[L])
            {
                maximum = max(maximum, prices[R] - prices[L]);
            }
            else
            {
                L = R;
            }
        }
        return maximum;
    }
};
