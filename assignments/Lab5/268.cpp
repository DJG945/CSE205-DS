class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int v=nums.size();
        for(int i=0;i<v;i++){
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
        int i=0;
        for(;i<v;i++){
            if(nums[i]!=i){
                return i;
            }
        }
        return v;
    }
};