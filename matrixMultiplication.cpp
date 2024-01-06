#include <iostream>
using namespace std;
int main()
{
    int row1, col1, row2, col2;
    cout<< "Enter row and columns for matrix-A"<<endl;
    cin>>row1 >>col1;
    cout<< "Enter row and columns for matrix-B"<<endl;
    cin>>row2 >>col2;
    int matrixA[row1][col1], matrixB[row2][col2], MulMatrix[row1][col2];
    
    cout<<"Enter Matrix 1:"<<endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin>>matrixA[i][j];
        }
        
    }

    cout<<"Enter Matrix 2:"<<endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin>>matrixB[i][j];
        }
        
    }

    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            MulMatrix[i][j] = 0;
            for (int k = 0; k < col1; ++k) {
                MulMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    cout<<"Multiplication of MatrixA and matriB:"<<endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout<<MulMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

