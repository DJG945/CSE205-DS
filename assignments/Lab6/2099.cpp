
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
     
        vector<int>help = nums;
        sort(help.begin(),help.end() , greater<int>());
        vector<int> ans;
        unordered_map<int,int> helpm;
        for(int i = 0; i < k ; i++)
        {
           cout << help[i] << " ";
            helpm[help[i]]++;
        }
        for(int i = 0 ; i < nums.size()  ; i++)
        {
            if(helpm.find(nums[i]) != helpm.end() && helpm[nums[i]] > 0) 
            {
                ans.push_back(nums[i]);
                helpm[nums[i]]--;
            }
        }
        return ans;
    }
};