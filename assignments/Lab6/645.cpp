class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>v;
        int repeat=0;
        for(int i:nums){
            mp[i]++;
            if(mp[i]==2){
                repeat=i;
            }
        }
        int c=0;
        for(int i=1;i<=nums.size();i++){
            if(!mp.count(i)){
                c=i;
                break;
            }
        }
        v.push_back(repeat);
        v.push_back(c);
        return v;
    }
};