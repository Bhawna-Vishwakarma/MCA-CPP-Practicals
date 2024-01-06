#include <iostream>
using namespace std;
int main()
{
    int row=0, col=0;
    cout<<"Enter row and columns for matrix"<<endl;
    cin>>row >>col;
    int matrix[row][col];

    cout<<"Enter Matrix:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    cout<<"Transpose of a Matrix:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

