// init.cpp -- 대입 구문에서 일어나는 데이터형 변환
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;     // int -> float
    int guess = 3.9832; // float -> int
    int debt = 7.2E12;  // It's unpredictable. It varies from compiler to compiler.

    // You can see warning message 
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    return 0;
}