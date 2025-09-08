#include <iostream>
using namespace std;

int main()
{
    float   base;
    float   percentage;
    float   allowances;
    float   deductions;
    float   net;

    cout<<"What is your base salary: ";
    cin>>base;

    cout<<"What is the percentage of allowances: ";
    cin>>percentage;
    allowances = base * (percentage/100);

    cout<<"What is the percentage of deductions: ";
    cin>>percentage;
    deductions = base * (percentage/100);
    
    net = base + allowances - deductions;
    cout<<"Your net salary is: "<<net<<endl;
}