class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=nums.size()-1;i>0;i--){
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
    }
};