class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int d=0,maxi=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==0){
                maxi=max(maxi,d);
                d=0;
            }
            else{
                d++;
            }
        }
        return max(maxi,d);
    }
};