#include<iostream>
using namespace std;
void printStars(int rowSize);
int main()
{
    int rowSize;
    cout << "Enter desired number of rows: ";
    cin >> rowSize;
    printStars(rowSize);
}
void printStars(int rowSize)
{
    int row,col;
    
    for(row=1; row<=rowSize; row++)      //rows
    {
        for(col=15; col>=row; col--)    // columns
        {
            cout << "*";               // charcter to be printed
        }
        cout << endl;                // to print on a new line 
    }
}
