#include<iostream>
using namespace std;
void TriangularNumber(int n);
int main()
{
    int n;
    cout << "Enter number of triangle: ";
    cin >> n;
    TriangularNumber(n);
}
void TriangularNumber(int n)
{
    int c,dots=0;         //c=decremented number pr all previous numbers of n
    for(c=n;c>=1;c--)     // n is the input
    dots=dots+c;
    cout << dots;
}
    

