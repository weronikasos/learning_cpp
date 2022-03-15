#include <iostream>

using namespace std;

int population=1 ; int hours=0 ;
int main()
{

    while(population<=1000000000)
    {
        hours++;
        population = population *2;
        cout<<"how many hours have passed:"<<hours;
        cout<<" number of bacteria: "<<population<<endl;
    }


    return 0;
}

