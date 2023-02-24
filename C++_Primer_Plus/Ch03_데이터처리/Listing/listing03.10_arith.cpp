// arith.cpp -- C++의 산술 연산
#include <iostream>
int main()
{
    using namespace std;
    float hats, heads;      // 고정 소수점 형식으로 출력

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Input hats number: ";
    cin >> hats;;
    cout << "Input heads number: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    return 0;
}

// 이 산술연산을 완전하게 신뢰할 수는 없다.
// 예를 들어 50.25 + 11.17 = 61.42지만 61.419998로 나온다. 이는 float형이 나타내는 유효숫자의 한계때문이다.
// 정밀한 연산 수행을 원한다면 double형이나 long double을 사용해야한다.