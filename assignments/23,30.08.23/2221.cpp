class Solution {
public:
    int arr(vector<int>& nums){
        vector<int>v;
        for(int i=0;i<nums.size()-1;i++){
            v.push_back((nums[i]+nums[i+1])%10);
        }
        if(v.size()==1){
            return v[0];
        }
        return arr(v);
    }
    int triangularSum(vector<int>& nums) {
        if(nums.size()>1){
            return arr(nums);
        }
        else{
            return nums[0];
        }
    }
};