// numstr2 -- 숫자입력 후 남은 개행문자로 인한 입력 오류 처리방법
#include <iostream>
int main()
{
    using namespace std;
    cout << "When did you move into your current apartment?\n";
    int year;
    cin >> year;
    cin.get();
    // (cin >> year).get(); 또는 (cin >> year).get(ch);
    // 두가지 방법으로 처리가 가능하다.

    cout << "Could you tell me your city?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Apartment occupancy year: " << year << endl;
    cout << "City: " << address << endl;
    cout << "Registration completed!\n";
    return 0;
}

// When did you move into your current apartment?
// 2023
// Could you tell me your city?
// Anyang
// Apartment occupancy year: 2023
// City: Anyang
// Registration completed!