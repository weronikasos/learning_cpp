#include <iostream>

using namespace std;
int PIN;
int main()
{
    cout <<"Hello to our bank! " << endl;
    cout << "Put in your PIN :";
    cin >> PIN;
    if(PIN=1729)
    {
        cout<<"Correct PIN number";
    }
   else
    {
        cout<< "Wrong PIN number";
    }
    return 0;
}
