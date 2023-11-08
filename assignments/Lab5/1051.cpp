class Solution {
public:
    void merge(vector<int>& heights,int s,int e){
        int mid=(s+e)/2;
        int l1=mid-s+1;
        int l2=e-mid;
        int *first=new int[l1];
        int *second=new int[l2];
        int arr=s;
        for(int i=0;i<l1;i++){
            first[i]=heights[arr++];
        }
        arr=mid+1;
        for(int i=0;i<l2;i++){
            second[i]=heights[arr++];
        }
        int index1=0;
        int index2=0;
        arr=s;
        while(index1<l1 && index2<l2){
            if(first[index1]<second[index2]){
                heights[arr++]=first[index1++];
            }
            else{
                heights[arr++]=second[index2++];
            }
        }
        while(index1<l1){
            heights[arr++]=first[index1++];
        }
        while(index2<l2){
            heights[arr++]=second[index2++];
        }
    }
    void mergeSort(vector<int>& heights,int s,int e){
        if(s>=e){
            return;
        }
        int mid=(s+e)/2;
        mergeSort(heights,s,mid);
        mergeSort(heights,mid+1,e);
        merge(heights,s,e);
    }
    int heightChecker(vector<int>& heights) {
        vector<int>v(heights);
        int n=heights.size()-1;
        mergeSort(heights,0,n);
        int c=0;
        for(int i=0;i<=n;i++){
            if(v[i]!=heights[i]){
                c++;
            }
        }
        return c;
    }
};