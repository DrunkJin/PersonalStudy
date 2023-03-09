// instr3.cpp -- get() & get()으로 여러 단어를 읽는다.
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Input your name:\n";
    cin.get(name, ArSize).get();        // 문자열, 개행문자를 읽는다.
    cout << "Input your favorite dessert:\n";
    cin.get(dessert, ArSize).get();
    cout << "I'll prepare delicious " << dessert;
    cout << ". Thank you. " << name << " sir!\n";
    return 0;
}

// Input your name:
// Mai Parfait
// Input your favorite dessert:
// Chocolate Mousse 
// I'll prepare delicious Chocolate Mousse. Thank you. Mai Parfait sir!