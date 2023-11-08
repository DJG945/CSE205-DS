class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>>freq('z'+1,{0,0});
        for(char c:s){
            freq[c]={freq[c].first+1,c};
        }
         sort(freq.begin(),freq.end());
         string ans="";
         for(auto p:freq){
             ans=string(p.first,p.second)+ans;
         }
         return ans;
    }
};