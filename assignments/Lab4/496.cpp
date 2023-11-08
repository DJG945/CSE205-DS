class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>v;
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                    if(j==n2-1){
                        v.push_back(-1);
                    }
                    else{
                        bool b=0;
                        for(int k=j;k<n2;k++){
                            if(nums2[j]<nums2[k]){
                                b=1;
                                v.push_back(nums2[k]);
                                break;
                            }
                        }
                        if(b==0){
                             v.push_back(-1);
                        }
                    }
                }
            }
        }
        return v;
    }
};