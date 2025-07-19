#include <iostream>
using namespace std;

int main()
{
    string    name;

    cout<<"May I have your name: ";
    // cin>>name;
    getline(cin, name); //To read full name if the name has a space.
    cout<<"Nice to meet you, "<<name<<"\n";
    return (0);
}