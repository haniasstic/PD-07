#include<iostream>
using namespace std;
bool primeNumber(int num);
int primoral(int n);
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout<<primoral(n);
}
bool primeNumber(int num)
{
    int i,count=0;
    bool result;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        count++;
    }
    if(count==2)
   {
       result=true;
   }
    else
    {
   {
       result=false;
       
   }
    }
    return result;
}
int primoral(int n)
{
    int product=1;
    int num=2;
    int i=0;
    while(i<n)
    {
        if(primeNumber(num))
        {
            product=product*num;
            i++;
        }
        num++;
    }
    return product;
}
