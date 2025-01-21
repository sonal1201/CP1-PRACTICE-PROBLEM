// Code

void matrixMul(vector<vector<int>> mat1, vector<vector<int>> mat2, int i, int j, int k, int l)
{
    int m1row = mat1[0].size();
    int m1col = mat1.size();
    int m2row = mat2[0].size();
    int m2col = mat2.size();

    if (i == m1row || j == m1col || k == m2row || l == m2col)
    {
        return;
    }
}

void matrixMul(vector<vector<int>> mat1, vector<vector<int>> mat2)
{
    int n = mat1.size();
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int i = 0; i < n; i++)
            {
                mat1[i][j] = mat1[i][k] * mat2[k][j];
            }
        }
    }
}