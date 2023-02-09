// ch02.7.cpp
// 시간과 분을 각각 따로 입력하게 하고 void 함수로 보내서 void함수는 "시각 : [시간]:[분]"으로 표시하게 만들기

#include <iostream>
using namespace std;

void maketime(int, int);

int main()
{
    int hour, min;
    cout << "Input Hour: ";
    cin >> hour;
    cout << "Input Minute: ";
    cin >> min;
    maketime(hour, min);
    return 0;
}

void maketime(int a, int b)
{
    cout << "Time : " << a << ":" << b << endl;
}