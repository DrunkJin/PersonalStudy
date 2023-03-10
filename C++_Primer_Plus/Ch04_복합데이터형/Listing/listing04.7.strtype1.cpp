// strtyp1.cpp -- C++ string클래스를 사용한다.
#include <iostream>
#include <string>       // string클래스를 사용하기 위해
int main()
{
    using namespace std;
    char charr1[20];               // 빈배열 생성
    char charr2[20] = "jaguar";    // 초기화된 배열 생성
    string str1;                   // 빈 string 객체 생성
    string str2 = "panther";       // 초기화된 string 객체 생성

    cout << "Enter a species of animal in the cat family: ";
    cin >> charr1;
    cout << "Enter another species of animal in the cat family: ";
    cin >> str1;
    cout << "The animals below are all cats: \n";
    cout << charr1 << " " << charr2 << " "
        << str1   << " " << str2          // 출력을 위해 cout을 사용한다
        << endl;
    cout << "The third letter from the " << charr2 << ": "
         << charr2[2] << endl;
    cout << "The third letter from the " << str2 << ": "
         << str2[2] << endl;               // 배열 표기를 사용
 return 0;   
}

// Enter a species of animal in the cat family: lion
// Enter another species of animal in the cat family: tiger
// The animals below are all cats:     
// lion jaguar tiger panther
// The third letter from the jaguar: g 
// The third letter from the panther: n