// ch03.1.cpp -- 키를 정수형 센티미터 단위로 묻고 그 값을 미터와 센티미터 단위로 변환하는 간단한 프로그램을 작성하라. 
// 입력해야 할 곳을 사용자에게 지시하기 위해 밑줄 문자를 사용하고 환산 인수로 const 기호 상수를 사용하라

#include <iostream>
int main()
{
    using namespace std;
    const int meter_to_centi = 100;

    cout << "변환할 센티미터를 입력하세요. (정수형): _____ \b\b\b\b\b" << endl;
    
    long centimeter;
    cin >> centimeter;

    cout << "입력한 " << centimeter << "(cm)는 ";
    cout << centimeter / meter_to_centi << "." << centimeter % meter_to_centi << "(m)입니다." << endl;
}

// 변환할 센티미터를 입력하세요. (정수형): _____ 
// 14320
// 입력한 14320(cm)는 143.20(m)입니다.