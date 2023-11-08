class Solution {
public:
    vector<int> Sort(vector<int>&v){
        for(int i=v.size()-1;i>0;i--){
            bool b=0;
            for(int j=0;j<i;j++){
                if(v[j]>v[j+1]){
                    swap(v[j],v[j+1]);
                    b=1;
                }
            }
            if(b==0){
                break;
            }
        }
        return v;
    }
    int minimumSum(int num) {
        vector<int>v;
        while(num>0){
            v.push_back(num%10);
            num=num/10;
        }
        Sort(v);
        return (10*v[0]+v[2])+(10*v[1]+v[3]);
    }
};