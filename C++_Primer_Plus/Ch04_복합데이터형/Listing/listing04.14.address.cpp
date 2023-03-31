// address.cpp -- & 연산자로 주소를 알아낸다.
#include <iostream>
int main()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donut's value = " << donuts;
    cout << ", donut's address = " << &donuts << endl;

    // cf) unsigned (&donuts) and unsighned (&cups) are somtimes required to be used.
    cout << "cups's value = " << cups;
    cout << ", cups's address = " << &cups << endl;
    return 0;
}

// donut's value = 6, donut's address = 0x61ff0c
// cups's value = 4.5, cups's address = 0x61ff00