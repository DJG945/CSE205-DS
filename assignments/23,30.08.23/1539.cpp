class Solution {
    bool check(vector<int>& arr,int j){
        for(int i=0;i<arr.size();i++){
            if(arr[i]==j){
                return true;
            }
        }
        return false;
    }
public:
    int findKthPositive(vector<int>& arr, int k) {
      int j=1;
      int l=0;
      for(int i=0;i<=10000;i++){
          if(check(arr,j)){
               j++;
          }
          else{
              l++;
              if(l==k){
                  break;
              }
              j++;
         }
      }
      return j;
    }
};