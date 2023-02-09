// getinfo.cpp -- 입력과 출력
#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    cout << "How man carrots do you have?" << endl;
    cin >> carrots;  // C++ 입력!
    cout << "There are two more here. ";
    carrots = carrots + 2;
// 다음 라인은 출력을 연결한다.
    cout << "Now there are a total of " << carrots << "carrots." << endl;
    return 0;
}