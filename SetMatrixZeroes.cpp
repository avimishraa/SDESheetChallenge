#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> setmatrixzeroes(vector<vector<int>> &Matrix) {
    int n = Matrix.size();
    int m = Matrix[0].size();

    vector<int> row(n, 0);
    vector<int> col(m, 0);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(Matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(row[i] == 1 || col[j] == 1) {
                Matrix[i][j] = 0;
            }
        }
    }

    return Matrix;
}

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    setmatrixzeroes(matrix);

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}