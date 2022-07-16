#include "bits/stdc++.h"
#define maxrow 100
#define maxcol 100
using namespace std;

class Matrix
{
public:
    int a[maxrow][maxcol];
    int rows, cols;
    Matrix()
    {
        rows = cols = 2;
    }
    Matrix(int r, int c, int mat[maxrow][maxcol])
    {
        rows = r;
        cols = c;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                a[i][j] = mat[i][j];
    }
    void display()
    {
        for (int i = 0; i < rows; i++)
        {
            cout << " [  ";
            for (int j = 0; j < cols; j++)
                cout << a[i][j] << "  ";
            cout << "]" << endl;
        }
        cout << endl;
    }
    Matrix operator+(Matrix x)
    {
        if (x.rows != rows || x.cols != cols || (rows == 0 && cols == 0)) Matrix();
        int mat[maxrow][maxcol];
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                mat[i][j] = a[i][j] + x.a[i][j];
        return Matrix(rows, cols, mat);
    }
    int operator==(Matrix x)
    {
        if (x.rows != rows || x.cols != cols) return 0;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                if (a[i][j] != x.a[i][j]) return 0;
        return 1;
    }
};
int main()
{
    int a[maxrow][maxcol], a2[maxrow][maxcol];
    int r,c,r2,c2;
    cout << "\tNikhil\n\t21BCS9434\n";
    cout<<"Enter the number of rows for 1st matrix: ";
    cin>>r;
    cout<<"Enter the number of coloumns for 1st matrix: ";
    cin>>c;
    cout<<"Enter the first array: \n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
    cout<<"Enter the number of rows for 2nd matrix: ";
    cin>>r2;
    cout<<"Enter the number of coloumns for 2nd matrix: ";
    cin>>c2;
    cout<<"Enter the second array: \n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> a2[i][j];
    Matrix mat1(r, c, a);
    Matrix mat2(r, c, a);
    Matrix mat3(r2, c2, a2);
    Matrix mat4;
    cout << "Elements of Matrix 1:" << endl;
    mat1.display();
    cout << "Elements of Matrix 2:" << endl;
    mat2.display();
    cout << "Elements of Matrix 3:" << endl;
    mat3.display();
    mat4 = mat1 + mat3;
    cout << "Elements of Matrix after addition of Matrix 1 and Matrix 3:" << endl;
    mat4.display();
    if (mat1 == mat2)
    {
        cout << "Matrix 1 is equals to Matrix 2" << endl;
    }
    else
    {
        cout << "Matrix 1 is not equals to Matrix 2" << endl;
    }
    if (mat1 == mat3)
    {
        cout << "Matrix 1 is equals to Matrix 3" << endl;
    }
    else
    {
        cout << "Matrix 1 is not equals to Matrix 3" << endl;
    }
    return 0;
}
