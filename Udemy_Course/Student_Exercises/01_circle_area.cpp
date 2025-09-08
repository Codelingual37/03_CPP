#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int radius;
    float area;

    cout<<"Enter the radius: ";
    cin>>radius;

    area = 3.14 * pow(radius, 2);

    cout<<"The area is: "<<area<<endl;
}