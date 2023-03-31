// init_ptr.cpp -- 포인터를 초기화한다.
#include <iostream>
int main()
{
    using namespace std;
    int higgens = 5;
    int * pt = &higgens;

    cout << "higgens's value = " << higgens
         << ", higgens's address = " << &higgens << endl;
    cout << "*pt's value = " << *pt
         << ", pt's value = " << pt << endl;

    return 0;
}

// higgens's value = 5, higgens's address = 0x61ff08
// *pt's value = 5, pt's value = 0x61ff08