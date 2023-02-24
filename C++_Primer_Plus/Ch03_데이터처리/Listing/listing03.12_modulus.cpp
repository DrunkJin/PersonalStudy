// modulus.cpp -- % 연산자를 이용하여 파운드를 스톤으로 변환한다.
#include <iostream>
int main()
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;      // 몫은 스톤으로
    int pounds = lbs % Lbs_per_stn;     // 나머지는 파운드로
    cout << lbs << " 파운드는 " << stone
         << " 스톤, " << pounds << " 파운드입니다.\n";
    return 0;
}


// int stone 부분은 int형이므로 정수 나눗셈을 실행한다.
// int pounds 부분은 정수 나눗셈에서 나머지를 구하는 것이다.