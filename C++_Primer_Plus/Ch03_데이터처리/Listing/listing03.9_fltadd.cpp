// fltadd.cpp float형에서의 정밀도 손실 문제
#include <iostream>
int main()
{
    using namespace std;
    float a = 2.34E+22f;
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;
    return 0;
}

// a가 매우 큰수이기 때문에 표현할 수 없다.
// float형은 처음 6개의 숫자 또는 7개의 숫자까지만 나타낼 수 있음.