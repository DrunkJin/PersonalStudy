// use_new.cpp -- new 연산자 사용하기
#include <iostream>
int main()
{
    using namespace std;
    int nights = 1001;
    int * pt = new int;     // int형을 저장할 메모리를 대입
    *pt = 1001;             // 대입된 메모리에 값을 저장

    cout << "nights value = ";
    cout << nights << ": Memory location " << &nights << endl;
    cout << "int type ";
    cout << "value = " << *pt << ": Memory location = " << pt << endl;

    double * pd = new double;   // double형을 저장할 메모리를 대입
    *pd = 10000001.0;           // 그 메모리에 double형 값을 저장

    cout << "double type ";
    cout << "value = " << *pd << ": Memory location = " << pd << endl;
    cout << "Memory location of pointer pd: " << &pd << endl;
    cout << "Size of pt = " << sizeof(pt);
    cout << ": Size of *pt = " << sizeof(*pt) << endl;
    cout << "Size of pd = " << sizeof(pd);
    cout << ": Size of *pd = " << sizeof(*pd) << endl;
    return 0;
}


// nights value = 1001: Memory location 0x61ff08
// int type value = 1001: Memory location = 0x9718a8
// double type value = 1e+007: Memory location = 0x9718b8
// Memory location of pointer pd: 0x61ff04
// Size of pt = 4: Size of *pt = 4
// Size of pd = 4: Size of *pd = 8