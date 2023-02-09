// ch02.4.cpp
// 사용자의 나이 입력을 요구하는 프로그램 작성하고 그 나이를 월수로 나타내도록 결과창에

#include <iostream>
int agetomonth(int);

int main()
{
    using namespace std;
    int age;
    cout << "Enter your age : ";
    cin >> age;
    cout << "Your age convert to months : " << agetomonth(age) << endl;
    return 0;
}

int agetomonth(int n)
{
    return n * 12;
}