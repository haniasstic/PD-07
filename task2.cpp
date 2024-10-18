// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void printUpperPart(int rowSize);
void printLowerPart(int rowSize);
int main() 
{
    int rowSize;
    cout << "Enter the number of rowSize: ";
    cin >> rowSize;
    printUpperPart(rowSize);
    printLowerPart(rowSize);
}

void printUpperPart(int rowSize)
{
    int row,col;
      for(row=rowSize; row>=1; row--)
    {
        for(col=1; col<=rowSize; col++)
        {
            if(col<row)
               cout << " ";
            else
               cout << "*";
        }
    cout << endl;
    }
}
void printLowerPart(int rowSize)
{
    int row,col;
    for(row=1;row<=rowSize; row++)
    {
        for(col=1;col<=rowSize; col++)
       { if(col<row)
            cout <<" ";
        else
            cout <<"*";
       }
       cout << endl;
    }
    
}
