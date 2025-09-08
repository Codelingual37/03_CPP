#include <iostream>
using namespace std;

int main()
{
    int number;
    int copy;
    int reversed;

    cout<<"Please enter a number: ";
    cin>>number;
    copy = number;
    reversed = 0;

    while (copy > 0)
    {
        //cout<<copy<<' '<<reversed<<endl;
        reversed += (copy % 10);
        if (copy >= 10)
            reversed *= 10;
        copy /= 10;
    }
    //cout<<reversed<<endl;
    if (number == reversed)
        cout<<"The number is a palindrome."<<endl;
    else
        cout<<"The number is NOT a palindrome."<<endl;
}