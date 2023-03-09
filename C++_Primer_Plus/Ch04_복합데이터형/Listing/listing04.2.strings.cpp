// string.cpp -- 배열에 문자열을 저장한다.
#include <iostream>
#include <cstring>      // strlen() 함수를 사용하기 위해
int main()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];               // 비어있는 배열
    char name2[Size] = "C++owboy";  // 문자열 상수로 초기화된 배열
    // 참고: 어떤 C++에서는 name2 배열을 초기화하기 위해서
    // static 키워드를 사용해야 한다.

    cout << "Hello! I'm " << name2;
    cout << "! What's your name?\n";
    cin >> name1;
    cout << "Ah, " << name1 << "! Your name length is ";
    cout << strlen(name1) << ".. but \n";
    cout << sizeof(name1) << "bytes array stored!\n";
    cout << "Your name starts with " << name1[0] << "\n";
    name2[3] = '\0';        // null char
    cout << "The first threee characters ofo my name are as follows: ";
    cout << name2 << endl;

    return 0;
}


// Hello! I'm C++owboy! What's your name?
// Andrew
// Ah, Andrew! Your name length is 6.. but 
// 15bytes array stored!
// Your name starts with A
// The first threee characters ofo my name are as follows: C++

