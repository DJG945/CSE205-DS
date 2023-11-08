class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            if(mp.count(nums[i]))
            {
                if(abs(mp[nums[i]]-i)<=k)
                    return true;
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};