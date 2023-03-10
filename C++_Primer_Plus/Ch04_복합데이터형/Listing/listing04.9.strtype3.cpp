// strtype3.cpp -- string 클래스의 기타 기능
#include <iostream>
#include <string>
#include <cstring>      // C 스타일 문자열 라이브러리

int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    // string 객체의 대입과 문자 배열의 대입
    str1 = str2;        // str2를 str1에 복사
    strcpy(charr1, charr2);  // charr2를 charr1에 복사

    // string 객체와 추가와 문자 배열의 추가
    str1 += " paste";       // str1의 끝에 paste를 추가
    strcat(charr1, " juice");       // charr1의 끝에 juice를 추가

    // string 객체의 길이 구하기와 C스타일 문자열의 길이 구하기
    int len1 = str1.size();     // str1의 길이를 구한다.
    int len2 = strlen(charr1);  // charr1의 길이를 구한다.

    cout << str1 << " string has "
        << len1 << " characters.\n";
    cout << charr1 << " has "
        << len2 << " characters.\n";
    return 0;
}

// panther paste string has 13 characters.
// jaguar juice has 12 characters.