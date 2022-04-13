#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int number ;
int main()
{
    cout << "Mikael! I have puzzle for you!I thought of number between 1...100" << endl;
    srand(time(NULL)) ;
    number = rand()%100+1 ;
    _sleep(3000);
    cout << number << endl ;
    return 0;
}




