#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout<< "Enter row and columns for matrix"<<endl;
    cin>>row >>col;
    int matrixA[row][col], matrixB[row][col], SumMatrix[row][col];

    cout<<"Enter Matrix 1:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>matrixA[i][j];
        }
        
    }
    cout<<"Enter Matrix 2:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>matrixB[i][j];
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            SumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
        
    }
    cout<<"Addition of MatrixA and matriB:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<SumMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

