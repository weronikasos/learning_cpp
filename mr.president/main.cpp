#include <iostream>

using namespace std;

int age;

int main()
{
    cout << "How old are you?: ";
    cin >> age;

    if(age>=18)
    cout << "You are legal" << endl << endl;
    else
    {
    cout << "You are underage" << endl;
    }
    if (age>=35)
    {
    cout << "You can become a president" << endl;
    }
    else
    {
    cout << "You cannot become a president" << endl;
    }
    return 0;
}

