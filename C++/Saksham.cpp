#include "bits/stdc++.h"
using namespace std;

class Matrix
{
public:
    int row = 0, col = 0;
    vector<vector<double>> mat;
    Matrix(){};
    Matrix(int r, int c)
    {
        row = r;
        col = c;
    }
    void set(int i, int j, double val)
    {
        mat[i][j] = val;
        // cout<<"f";
    }
    void showrow()
    {
        cout << row << "\n";
        // cout<<"r";
    }
    void showcol()
    {
        cout << col << "\n";
        // cout<<"c";

    }
    Matrix add(Matrix _2)
    {
        // cout<<"add";
        Matrix addition;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                addition.mat[i][j] =mat[i][j] + _2.mat[i][j];
            }
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << mat[i][j] << " ";
            }
        }
        cout << "\n";
        return addition;
    }
    Matrix mul(Matrix _2)
    {
        // cout<<"mul"; 
        Matrix multiply;
        for (int i = 0; i < row; ++i)
            for (int j = 0; j < _2.col; ++j)
                for (int k = 0; k < col; ++k)
                {
                    multiply.mat[i][j] += mat[i][k] * _2.mat[k][j];
                }

        for (int i = 0; i < row; ++i)
            for (int j = 0; j < _2.col; ++j)
            {
                cout << " " << multiply.mat[i][j];
                // if (j == _2.col - 1)
                //     cout << endl;
            }
        cout<<"\n";
        return multiply; 
    }
};

int main(void)
{
    Matrix A(2,2),B(2,2);
    A.set(0,0,1.0);
    A.set(0,1,2.0);
    A.set(1,0,3.0);
    A.set(1,1,4.0);

    B.set(0,0,10.0);
    B.set(0,1,20.0);
    B.set(1,0,30.0);
    B.set(1,1,40.0);

    A.showrow();
    A.showcol();
    
    B.showrow();
    B.showcol();

    Matrix sum,mult;
    sum=A.add(B);
    mult=A.mul(B);
    return 0;
}
