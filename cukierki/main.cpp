#include <iostream>

using namespace std;
int students, treats , x,y;


int main()
{
    cout << "How many students there are in your class :" << endl;
    cin >> students;
    cout << "How many treats did mom buy :";
    cin >> treats;
    x= treats /(students -1);
    cout<<"treats for every student:"<<x;
    y=treats- x*(students-1);
    cout<<endl <<"treats for Jimmmys evening :"<<y;
    return 0;
}
