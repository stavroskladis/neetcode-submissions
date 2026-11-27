class NumMatrix {
public:
    int m = 0;
    int n = 0;
    vector<vector<int>> prefix;

    NumMatrix(vector<vector<int>>& matrix) {
        m = matrix.size();
        n = matrix[0].size();
        prefix.assign(m+1, vector<int>(n+1, 0));

        // Construct the prefix array O(mn)
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                prefix[i+1][j+1] = prefix[i][j+1] // above
                                 + prefix[i+1][j] // left
                                 - prefix[i][j]   // common
                                 + matrix[i][j];  // initial
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return this->prefix[row2+1][col2+1]
             - this->prefix[row1][col2+1]
             - this->prefix[row2+1][col1]
             + this->prefix[row1][col1];
    }
};
