// arraynew.cpp -- 배열을 위해 new 연산자 사용
#include <iostream>
int main()
{
    using namespace std;
    double * p3 = new double [3];   // double형 데이터 3개를 저장할 수 있는 공간을 대입한다.

    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1;        // 포인터를 증가시킨다.
    cout << "Now, p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1;        // 다시 시작 위치를 지시한다.
    delete [] p3;       // 배열 메모리를 해제한다.
    return 0;
}


// p3[1] is 0.5.
// Now, p3[0] is 0.5 and p3[1] is 0.8.