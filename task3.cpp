#include <iostream>
using namespace std;
void amplify(int n);
int main()
{
    int n;
    cout << "Enter the number you want to ampilfy: ";
    cin >> n;
    amplify(n);
}
void amplify(int n)
{
    int x;
    for(x=1;x<=n;x++)
    if(x%4==0)
    cout<<x*10<<",";
    else
    {
        cout<<x<<",";
    }
}
    
