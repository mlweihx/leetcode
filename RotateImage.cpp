class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        # 声明一个同样的矩阵，用于赋值
        vector<vector<int>> matrix_temp = matrix;
        # n 是行列数减一
        int n = matrix.size() - 1;
        # 行列换序赋值
        int i, j;
        for (i = 0; i < matrix.size(); i++){
            for (j = 0; j<matrix.size(); j++){
                matrix[i][j] = matrix_temp[n-j][i];
            }
        }
        
    }
};
