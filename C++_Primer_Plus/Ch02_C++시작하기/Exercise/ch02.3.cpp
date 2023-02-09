// ch02.3.cpp
// 세개의 사용자 정의함수를 통해 출력결과 만들기 하나를 2번씩 호출해서 출력
#include <iostream>

void first();
void second();

int main()
{
    first();
    first();
    second();
    second();
    return 0;
}

void first()
{
    using namespace std;

    cout << "Three blind mice" << endl;
}


void second()
{
    using namespace std;

    cout << "See how they run" << endl;
}