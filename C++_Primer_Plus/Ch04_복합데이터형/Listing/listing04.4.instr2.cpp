// instr2.cpp -- getline() 함수로 한 행을 읽는다.
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Input your name:\n";
    cin.getline(name, ArSize);      // 개행 문자가 있는 곳까지 읽는다.
    cout << "Input your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "I'll prepare delicious " << dessert;
    cout << ". Thank you. " << name << " sir!\n";
    return 0;
}


// Input your name:
// Dirk Hammernose
// Input your favorite dessert:
// Radish Torte
// I'll prepare delicious Radish Torte. Thank you. Dirk Hammernose sir!