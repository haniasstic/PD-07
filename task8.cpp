#include<iostream>
#include<iomanip>
using namespace std;
void cargo(int count);
int main()
{
    int count;
    cout <<"Enter the count for transportation: ";
    cin >> count;
    cargo(count);
}
void cargo(int count)
{
    int i=0;
    int tonnage,sum=0;
    float minibus,truck,train;
    float usd1,usd2,usd3,USD;

    while(i<count)
    {
        i++;
        cout << "Enter the tonnage of cargo "<<i<<":";
        cin>> tonnage;
        sum+=tonnage;
        if(tonnage<=3)
        {
        minibus+=tonnage;
        }
       else if(tonnage>4 && tonnage<=11)
       {
        truck+=tonnage;
       }
        else if(tonnage>11)
        {
        train+=tonnage;
        }
        usd1=minibus/sum*100;
        usd2=truck/sum*100;
        usd3=train/sum*100;
        USD=((usd1*200)+(usd2*175)+(usd3*120))/100;
    }
    
    cout<<fixed<<setprecision(2)<<USD<<"%\n"<<fixed<<setprecision(2)<<usd1<<"%\n"<<fixed<<setprecision(2)<<usd2<<"%\n"<<fixed<<setprecision(2)<<usd3<<"%\n";
    
    }

