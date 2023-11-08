class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int v=prices.size()-1;
        for(int i=v;i>=0;i--){
            bool b=0;
            for(int j=0;j<=i-1;j++){
                if(prices[j]>prices[j+1]){
                    swap(prices[j],prices[j+1]);
                    b=1;
                }
            }
            if(b==0){
                break;
            }
        }
        if(prices[0]+prices[1]-money>0){
            return money;
        }
        else{
            return money-prices[0]-prices[1];
        }
    }
};