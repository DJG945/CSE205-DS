class Solution {
public:
    void merge(vector<int>&arr , int start , int end){
    int mid = start + (end-start)/2;
    int sizeA = mid -start+1;
    int sizeB = end - mid;
    
    int *first = new int[sizeA];
    int *second = new int[sizeB];
    
    int index = start;
    for(int i=0;i<sizeA;i++){
        first[i] = arr[index++];
    }
    index = mid+1;
    for(int i=0;i<sizeB;i++){
        second[i] = arr[index++];
    }
    
    int index1 = 0;
    int index2 = 0;
    index = start;
    while(index1<sizeA && index2<sizeB){
        if(first[index1] < second[index2]){
            arr[index++] = first[index1++];
        }
        else{
             arr[index++] = second[index2++];
        }
    }
    while(index1<sizeA){
        arr[index++] = first[index1++];
    }
    while(index2<sizeB){
        arr[index++] = second[index2++];
    }
}
void mergeSort(vector<int>&arr,int start,int end){
    if(start>=end){
        return ;
    }
    int mid = start + (end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    
    merge(arr,start,end);
}
vector<int> sortArray(vector<int>& nums) {

        int n = nums.size();
        mergeSort(nums,0,n-1);
        return nums;
    }
};