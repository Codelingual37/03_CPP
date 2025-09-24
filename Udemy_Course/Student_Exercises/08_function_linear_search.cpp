#include <iostream>
using namespace std;

int linsearch(int *arr, int num)
{
    for (int i = 0; i < 10; i++)
    {
        if (num == arr[i])
            return (i);
    }
    return (-1);
}

int main()
{
    int num;
    int index;
    int arr[10] = {25, 30, 1, 10, 3, 7, 8, 1, 2, 15};

    cout<<"Please enter a number to search: ";
    cin>>num;
    index = linsearch(arr, num);
    if (index != -1)
        cout<<"The number is at index: "<<index<<endl;
    else
        cout<<"The number was not found."<<endl;
}