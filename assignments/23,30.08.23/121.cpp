class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        if(prices.size()==0)
        return 0;
        int curr=0;
        int mini=prices[0];
        int profit=0,maxi=0;
        for(auto i : prices)
        {
            mini=min(mini,i);// takes min from elements before it
            profit=i-mini; // takes profit from min element by every element till that element
            maxi=max(maxi,profit);// takes max profit
        }
        return maxi;
    }
};