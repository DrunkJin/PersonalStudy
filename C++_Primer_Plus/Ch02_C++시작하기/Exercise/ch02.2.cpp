//  ch02.2.cpp 
// 거리에 대해 마일 단위로 입력을 요구하고 그것을 킬로미터 단위로 환산하는 프로그램을 작성하시오. (1마일은 1.60934킬로미터이다.)
#include <iostream>
double miletokm(double);

int main()
{
    using namespace std;
    
    double mile;
    cout << "킬로미터(km)로 변환하고 싶은 마일(mile) 입력: ";
    cin >> mile;
    cout << "입력하신 " << mile
         << "mile은 "
         << miletokm(mile)
         << "km입니다."
         << endl;
    return 0;
}

double miletokm(double n)
{
    return n * 1.60934;
}