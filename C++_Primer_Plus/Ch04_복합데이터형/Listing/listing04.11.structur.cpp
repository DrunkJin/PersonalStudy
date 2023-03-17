// structur.cpp -- 간단한 구조체
#include <iostream>
struct inflatable       // 구조체 선언
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest =
    {
        "Glorious Gloria",  // name value
        1.88,               // volume value
        29.99               // price value
    };                      // guest는 inflatable형의 구조체 변수

                            // 지정된 값으로 초기화됨
    inflatable pal = 
    {
        "Audacios Arther",
        3.12,
        32.99
    };                      // pal은 inflatable형의 두번째 수이다.
// 참고 : 어떤 C++ 시스템에서는 다음과 같은 형식을 요구한다.
// static inflatable guest = 
    
    cout << "The model ballons we're selling now are\n" << guest.name;
    cout << " and " << pal.name << ".\n";
// pal.name은 pal 변수의 name 멤버이다.
    cout << "I'll give you both product for $";
    cout << guest.price + pal.price << "!\n";
    return 0;
}

// The model ballons we're selling now are
// Glorious Gloria and Audacios Arther.
// I'll give you both product for $62.98!