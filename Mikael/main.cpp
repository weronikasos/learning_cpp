#include <iostream>

using namespace std;

int age;
int main()
{
    cout << "How old are you?" ;
    cin >> age;

    for (int i=age; i>0; i--)
    {
        cout << "HAPPY BIRTHDAY " << i << endl;
    }

     cout << "" << endl;
    for (int i=0; i<age; i++)
    {
        cout << "HAPPY BIRTHDAY " << i << endl;
    }

    return 0;
}
