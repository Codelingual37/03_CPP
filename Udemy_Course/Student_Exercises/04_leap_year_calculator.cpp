#include <iostream>
using namespace std;

int main()
{
    int year;

    cout<<"Please enter the year: ";
    cin>>year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout<<year<<" is a leap year."<<endl;
            else
                cout<<year<<" is NOT a leap year."<<endl;
        }
        else
            cout<<year<<" is a leap year."<<endl;
    }
    else
        cout<<year<<" is NOT a leap year."<<endl;
}