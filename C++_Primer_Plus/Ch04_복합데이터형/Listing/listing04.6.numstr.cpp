// numstr.cpp -- 수치 입력 뒤에 오는 문자열 입력
#include <iostream>
int main()
{   using namespace std;
    cout << "When did you move into your current apartment?\n";
    int year;
    cin >> year;
    cout << "Could you tell me your city?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Apartment occupancy year: " << year << endl;
    cout << "City: " << address << endl;
    cout << "Registration completed!\n";
    return 0;
}


// When did you move into your current apartment?
// 1966
// Could you tell me your city?
// Apartment occupancy year: 1966
// City:
// Registration completed!