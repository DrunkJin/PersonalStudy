// arrayone.cpp -- 정수형의 작은 배열
#include <iostream>
int main()
{
    using namespace std;
    int yams[3];        // 3개의 원소를 가진 배열 생성
    yams[0] = 7;        // 첫번째 원소에 값을 대입
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {200, 300, 50};   // 배열을 생성하고 초기화한다.
    // 배열 초기화가 안된다면 static int yamcosts[3]을 사용할 것

    cout << "Total Potatoes = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << yams[1] << "pieces packaging is ";
    cout << yamcosts[1] << "won each.\n";
    int total = yams[0] = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "Three packages total price is " << total << "won.\n";
    cout << "\nyams array of size is " << sizeof yams;
    cout << "bytes.\n";
    cout << "each element size is " << sizeof yams[0];
    cout << "bytes.\n";
    return 0;
}

// Total Potatoes = 21
// 8pieces packaging is 300won each.
// Three packages total price is 4100won.

// yams array of size is 12bytes.
// each element size is 4bytes.