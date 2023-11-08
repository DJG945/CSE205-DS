class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size()-1;
        for(int i=n;i>=1;i--){
            bool b=0;
            for(int j=0;j<i;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                    b=1;
                }
            }
            if(b==0){
                break;
            }
        }
        if(nums.size()<=2){
            return -1;
        }
        else{
            return nums[1];
        }
    }
};