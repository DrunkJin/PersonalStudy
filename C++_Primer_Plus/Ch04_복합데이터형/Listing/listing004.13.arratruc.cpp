// arrstruc.cpp -- 구조체의 배열
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable guests[2] =          // 구조체 배열 초기화
    {
        {"Bambi", 0.5, 21.99},      // 배열에 있는 첫 번째 구조체
        {"Godzilla", 2000, 565.99}  // 배열에 있는 그 다음 구조체
    };
    
    cout << "The combinded volume of " << guests[0].name << " and " << guests[1].name
        << " is\n"
        << guests[0].volume + guests[1].volume
        << " cubic feet.\n";
        return 0;
}

// The combinded volume of Bambi and Godzilla is
// 2000.5 cubic feet.