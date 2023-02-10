// exceed.cpp -- 정수 한계값을 초과한다!
#include <iostream>
#define ZERO 0      // 값 0으로 대체될 기호 상수 ZERO 정의
#include <climits>  // INT_MAX가 int형의 최대값으로 정의되어있음

int main()
{
    using namespace std;
    short Dohee = SHRT_MAX;     // 변수를 최대값으로 초기화
    unsigned short Insuk = Dohee;    // Dohee가 정의되어있기 때문에 맞는 구문

    cout << "도희의 계좌에는 " << Dohee << "원이 들어있고 ";
    cout << "인숙이의 계좌에도 " << Insuk << "원이 들어있다." << endl;
    cout << "각각의 계좌에 1원씩 입금한다." << endl << "이제 ";
    Dohee = Dohee + 1;
    Insuk = Insuk + 1;
    cout << "도희의 잔고는 " << Dohee << "원이 되었고, ";
    cout << "인숙의 잔고는 " << Insuk << "원이 되었다." << endl;
    cout << "도희가 갑자기 마이너스 통장으로 바뀌었다!" << endl << endl;
    Dohee = ZERO;
    Insuk = ZERO;
    cout << "도희의 계좌에는 " << Dohee << "원이 들어있고 ";
    cout << "인숙이의 계좌에도 " << Insuk << "원이 들어있다." << endl;
    cout << "각각의 계좌에 1원씩 인출한다." << endl << "이제 ";
    Dohee = Dohee - 1;
    Insuk = Insuk - 1;
    cout << "도희의 잔고는 " << Dohee << "원이 되었고, ";
    cout << "인숙의 잔고는 " << Insuk << "원이 되었다." << endl;
    cout << "인숙이의 잔고가 갑자기 많아졌다!" << endl;
    return 0;
}