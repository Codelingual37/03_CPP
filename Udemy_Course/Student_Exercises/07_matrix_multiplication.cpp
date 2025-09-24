#include <iostream>
using namespace std;

int main()
{
    int number;
    int row_size_a;
    int row_size_b;
    int col_size_a;
    int col_size_b;
    int matrix_a[5][5] = {};
    int matrix_b[5][5] = {};
    int matrix_c[5][5] = {};

    cout<<"Please enter the number of rows of Matrix A (Max 5): ";
    cin>>number;
    row_size_a = number;
    cout<<"Please enter the number of columns of Matrix A (Max 5): ";
    cin>>number;
    col_size_a = number;
    cout<<"Please enter the number of rows of Matrix B (Max 5): ";
    cin>>number;
    row_size_b = number;
    cout<<"Please enter the number of columns of Matrix B (Max 5): ";
    cin>>number;
    col_size_b = number;
//  Check if matrices can be multiplied
    if (col_size_a != row_size_b)
    {
        cout<<"ERROR: The column amount of the first array does not equal the row amount of the second. Matrices cannot be multiplied."<<endl;
        return (1);
    }
//  User input matrices elements
    for (int i = 0; i < row_size_a; i++)
    {
        for (int j = 0; j < col_size_a; j++)
        {
            cout<<"Please enter an element for Matrix A: ";
            cin>>number;
            matrix_a[i][j] = number;
        }
    }
    for (int i = 0; i < row_size_b; i++)
    {
        for (int j = 0; j < col_size_b; j++)
        {
            cout<<"Please enter an element for Matrix B: ";
            cin>>number;
            matrix_b[i][j] = number;
        }
    }
    cout<<endl;
//  Multiply the matrices
    for (int i = 0; i < col_size_b; i++)
    {
        for (int j = 0; j < col_size_a; j++)
        {
            for (int k = 0; k < row_size_b; k++)
                matrix_c[i][j] += matrix_a[i][k] * matrix_b[k][j];
        }
    }
//  Print matrices to check
    cout<<"Matrix A:"<<endl;
    for (int i = 0; i < row_size_a; i++)
    {
        for (int j = 0; j < col_size_a; j++)
        {
            cout<<matrix_a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Matrix B: "<<endl;
    for (int i = 0; i < row_size_b; i++)
    {
        for (int j = 0; j < col_size_b; j++)
        {
            cout<<matrix_b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Matrix C: "<<endl;
    for (int i = 0; i < row_size_a; i++)
    {
        for (int j = 0; j < col_size_b; j++)
        {
            cout<<matrix_c[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}