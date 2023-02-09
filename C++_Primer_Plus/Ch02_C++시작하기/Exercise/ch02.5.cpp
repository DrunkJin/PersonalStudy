// ch02.5.cpp -- 섭씨온도를 입력할 것을 요구하고 화씨로 변환한 값을 출력하기
// 화씨온도 = 1.8 X 섭씨온도 + 32.0

#include <iostream>

double convtemperature(double);

int main()
{
    using namespace std;
    
    double cel;
    cout << "섭씨 온도를 입력하고 Enter키를 누르세요: ";
    cin >> cel;
    double fah;
    fah = convtemperature(cel);
    cout << "섭씨 " << cel << "도는 화씨로 " 
         << fah << "도입니다." << endl;
    return 0;
}

double convtemperature(double n)
{
    return (1.8 * n) + 32.0;
}