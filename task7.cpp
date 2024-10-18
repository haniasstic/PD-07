#include<iostream>
using namespace std;
void hospital(int days);
int main()
{
    int days=0;
    cout << "Enter the number of days you visited: ";
    cin >> days;
    hospital(days);
}
void hospital(int days)
{
    int treatedPatients=0;
    int untreatedPatients=0;
    int doctors=7;
    int i=0;
    {
        int patients;
    while(i<days){
        i++;
        cout << "Enter the number of patients visited on Day "<<i<<": ";
        cin >> patients;
    }
    if(i%3==0 && i!=0)
    {
        if(untreatedPatients>treatedPatients)
        {
            doctors++;
        }
    }
    if(patients<doctors)
    {
        treatedPatients+=patients;
    }
    else
    {
        treatedPatients+=doctors;
        untreatedPatients+=patients-doctors;
    }
    cout <<"Treated Patients: "<< treatedPatients<< endl;
    cout <<"UntreatedPatients: "<< untreatedPatients<< endl;
}
    
    
    
    
    
    
    
    
}
