#include <iostream>

using namespace std;
string login,password ;
int main()
{
    cout << "Writte in your login:";
    cin >> login ;
    cout << "Writte in your password:" ;
    cin >> password;

    if((login=="admin") &&(password=="kotek") )
    {
        cout<< "successfully logged in!";
    }
    else
        {
            cout<<"log in was unsuccessful";
        }
    return 0;
}
