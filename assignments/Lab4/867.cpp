class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int Rows=matrix.size();
        int Cols=matrix[0].size();
        vector<vector<int>>v;
        for(int i=0;i<Cols;i++){
            vector<int>row;
            for(int j=0;j<Rows;j++){
                row.push_back(matrix[j][i]);
            }
            v.push_back(row);
        }
        return v;
    }
};