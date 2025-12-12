#include<iostream>
using namespace std;
int main(){
    int row = 2 , col = 2;
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
        for(int j = i+1; j < col; j++)
        {
            //swap(matrix[i][j] , matrix[j][i]);
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    cout << "After swaping: \n";
    for(int i = 0; i < col; i++)
    {
        for(int j = 0; j < row; j++) cout << matrix[i][j] << ' ';
        cout << '\n';
    }
   
    return 0;
}