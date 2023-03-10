// strtype2.cpp -- 대입, 추가, 첨부
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string s1 = "penguin";
    string s2, s3;

    cout << "You can substitute a string object for a string object: s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "You can assign a C style string to a string object.\n";
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;
    cout << "String objects can be combined: s3 = s1 + s2\n";
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;
    cout << "You can add string objects.\n";
    s1 += s2;
    cout << "s1 += s2 --> s1 = " << s1 << endl;
    s2 += " for a day";
    cout << "s2 += \" for a day\" --> s2 = " << s2 << endl;

    return 0;
}

// You can substitute a string object for a string object: s2 = s1
// s1: penguin, s2: penguin
// You can assign a C style string to a string object.
// s2 = "buzzard"
// s2: buzzard
// String objects can be combined: s3 = s1 + s2
// s3: penguinbuzzard
// You can add string objects.
// s1 += s2 --> s1 = penguinbuzzard
// s2 += " for a day" --> s2 = buzzard for a day