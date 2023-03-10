// strtype4.cpp -- 행단위 입력
#include <iostream>
#include <string>
#include <cstring>
int main()
{
    using namespace std;
    char charr[20];
    string str;

    cout << "The length of the string in 'charr' before input: "
        << strlen(charr) << endl;
    cout << "The length of the string in 'str' before input: "
        << str.size() << endl;
    cout << "Enter a line of text: \n";
    cin.getline(charr, 20);      // 최대 길이를 나타낸다.
    cout << "Entered Text: " << charr << endl;

    cout << "Enter another line of text:\n";
    getline(cin, str);      // 이제 cin은 길이 지정자가 아니라 매개변수
    cout << "Entered Text: " << str << endl;
    cout << "The length of the string in 'charr' after typing: "
        << strlen(charr) << endl;
    cout << "The length of the string in 'str' after typing: "
        << str.size() << endl;
    return 0;
}

// The length of the string in 'charr' before input: 3
// The length of the string in 'str' before input: 0
// Enter a line of text:
// peanut butter
// Entered Text: peanut butter
// Enter another line of text:
// blueberry jam
// Entered Text: blueberry jam
// The length of the string in 'charr' after typing: 13
// The length of the string in 'str' after typing: 13