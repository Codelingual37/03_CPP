#include <iostream>
using namespace std;

int main()
{
    int total;
    int discount;

    cout<<"Please enter the total amount: ";
    cin>>total;

    if (total < 100)
        cout<<"There is no discount. The total is: "<<total<<endl;
    else if (total >= 100 && total < 500)
        cout<<"There is a 10\% discount. The total is: "<<total - (total * .10)<<endl;
    else
        cout<<"There is a 20\% discount. The total is: "<<total - (total * .20)<<endl;
}