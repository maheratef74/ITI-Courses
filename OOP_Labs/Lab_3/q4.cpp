#include<iostream>
using namespace std;
int main(){
    int row = 2 , col = 4;
    int matrix[row][col];
    cout << "Enter the array: \n";
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < row; i++)
    {
        int sum_of_row = 0;
        for(int j = 0; j < col; j++)
        {
            sum_of_row += matrix[i][j];
        }
        cout << "The sumation of row " << i << " = " << sum_of_row << '\n';
    }
    for(int i = 0; i < col; i++)
    {
        int sum_of_col = 0;
        for(int j = 0; j < row; j++)
        {
           sum_of_col += matrix[j][i];
        }
        cout << "The average of col " << i << " = " << sum_of_col/row << '\n';
    }
    return 0;
}