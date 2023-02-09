// ch02.6.cpp
// 광년을 받아서 천문단위로 변환하는 프로그램만들기. 사용자정의함수가 들어갈것. 1광년 = 63240. double형 변수 사용

#include <iostream>

double convert(double);

int main()
{
    using namespace std;

    double ly, au;      // ly : light year, au : astronaut unit
    cout << "광년 수를 입력하고 Enter 키를 누르십시오: ";
    cin >> ly;
    au = convert(ly);
    cout << ly
         << "광년은 "
         << au
         << "천문 단위입니다."
         << endl;
    return 0;
}

double convert(double k)
{
    return k * 63240;
}