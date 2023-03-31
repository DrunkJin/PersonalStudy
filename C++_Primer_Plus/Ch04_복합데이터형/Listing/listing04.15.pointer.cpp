// pointer.cpp -- 처음으로 배우는 포인터 변수
#include <iostream>
int main()
{
    using namespace std;
    int updates = 6;        // declare int variable
    int *p_updates;         // declare a pointer to an int type
    p_updates = &updates;   // Assigning an address of type into to a pointer

    // 값을 두가지 방법으로 표현
    cout << "value: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    // 주소를 두가지 방법으로 표현
    cout << "address: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    // 포인터를 사용하여 값을 변경
    *p_updates = *p_updates + 1;
    cout << "The changed updates = " << updates << endl;
    return 0;
}


// value: updates = 6, *p_updates = 6
// address: &updates = 0x61ff08, p_updates = 0x61ff08
// The changed updates = 7
