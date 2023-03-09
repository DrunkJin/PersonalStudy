// instr1.cpp -- 여러개의 문자열을 읽는다.
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Input your name:\n";
    cin >> name;
    cout << "Input your favorite dessert:\n";
    cin >> dessert;
    cout << "I'll prepare delicious " << dessert;
    cout << ". Thank you. " << name << " sir!\n";
    return 0;
}

// Input your name:
// Mike Pancake
// Input your favorite dessert:
// I'll prepare delicious Pancake. Thank you. Mike sir!