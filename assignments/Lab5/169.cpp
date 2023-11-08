class Solution {
public:
    int majorityElement(vector<int>& nums){
        int v=nums.size()-1;
        for(int i=1;i<v+1;i++){
            int temp=nums[i];
            int j=i-1;
            for(;j>=0;j--){
                if(nums[j]>temp){
                    nums[j+1]=nums[j];
                }
                else{
                    break;
                }
            }
            nums[j+1]=temp;
        }
        return nums[v/2];
    }
};