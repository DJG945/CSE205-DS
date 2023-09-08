class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int k=0;
        for(int i:nums){
            int j=0;
            while(i>0){
                i=i/10;
                j++;
            }
            if(j%2==0){
                k++;
            }
        }
        return k;
    }
};