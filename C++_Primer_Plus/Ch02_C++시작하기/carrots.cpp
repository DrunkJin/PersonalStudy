// carrots.cpp -- 음식물 처리 프로그램
// 하나의 변수를 사용하고 출력한다.

#include <iostream>

int main()
{
    using namespace std;

    int carrots;            // 정수 변수를 선언한다.

    carrots = 25;           // 변수에 값을 대입한다.
    cout << "I have ";
    cout << carrots;        // 변수의 값을 출력한다.
    cout << "carrots";
    cout << endl;
    carrots = carrots - 1; // 변수의 값을 변경한다.
    cout << "Crunch, Crunch. Now there are " << carrots << "carrots." << endl;
    return 0;
}