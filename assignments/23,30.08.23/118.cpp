class Solution {
public:
    void Triangle(vector<vector<int>> &ans, vector<int> &output, int numRows) {
        if(numRows==1){
            output.push_back(1);
            ans.push_back(output);
            output.clear();
            return;
        }
        Triangle(ans, output, numRows - 1);
        output.push_back(1);  // Add the first element of the current row.
        for (int i = 1; i < numRows - 1; i++) {
            output.push_back(ans[numRows - 2][i - 1] + ans[numRows - 2][i]);
        }
        output.push_back(1);  // Add the last element of the current row.
        ans.push_back(output);
        output.clear();
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> output;
        Triangle(ans, output, numRows);
        return ans;
    }
};
