#include <iostream>
using namespace std;

int main()
{
    int     *arr;
    int     element;
    int     arr_size;
    float   average;
    float   sum;
    
    sum = 0.0f;
    cout<<"Please enter the array size: ";
    cin>>arr_size;
    arr = new int[arr_size];
    for (int i = 0; i < arr_size; i ++)
        {
            cout<<"Please enter element at index "<<i<<" ";
            cin>>element;
            arr[i] = element;
        }
    for (int i = 0; i < arr_size; i++)
        sum += arr[i];
    average = sum / arr_size;
    cout<<"The average is: "<<average<<endl;
}