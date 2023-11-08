class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int startRow=0;
        int startCol=0;
        int Row=matrix.size();
        int Col=matrix[0].size();
        int endRow=Row-1;
        int endCol=Col-1;
        int count=0;
        int total=Row*Col;
        while(count<total){
            for(int i=startCol;i<=endCol && count<total;i++){
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;
            for(int i=startRow;i<=endRow && count<total;i++){
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;
            for(int i=endCol;i>=startCol && count<total;i--){
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
            for(int i=endRow;i>=startRow && count<total;i--){
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
};