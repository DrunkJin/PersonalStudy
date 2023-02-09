// convert.cpp -- 스톤을 파운드로 환산한다.
#include <iostream>
int stonetolb(int); // 함수 원형
int main()
{
    using namespace std;
    int stone;
    cout << "체중을 스톤 단위로 입력하시오: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << "스톤은 ";
    cout << pounds << "파운드입니다." << endl;
    return 0;
}

int stonetolb(int sts)
{
    return 14 * sts;
}

// stonetolb는 int형 리턴값을 주기 때문에 정수처럼 편하게 다음과 같이 사용이 가능하다.
// int aunt = stonetolb(10);
// int they = aunt + stonetolb(12);
// cout << "Total weight is " << stonetolb(20) << "pounds." << endl;
