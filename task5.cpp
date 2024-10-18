#include<iostream>
using namespace std;
int PrimeNumber(int n);
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    PrimeNumber(n);
}
int PrimeNumber(int n)
{
    int i,count=0;    // count is the number of factors n has
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    {
        cout << "The number is prime.";
    }
    else
    {
        cout << "Not a prime number.";
    }
    return 0;
}



