// ch03.3.cpp -- 위도를 도각, 분각, 초각 단위로 요청하여 10진수 형식으로 출력하는 프로그램을 작성하라.
// 1분각은 60초각이다. 1도각은 60분각이다. 이들을 기호상수로 표현하라.
// 각각의 입력값을 위해 별개의 변수를 사용할 것

#include <iostream>

using namespace std;
int main()
{
    const double MIN_TO_SEC = 60;
    const double DEGREE_TO_MIN = 60;
    int degrees, minutes, seconds;

    cout << "Enter a latitude in degrees, minutes, and seconds :" << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc:";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    
    double answer = degrees + (minutes / MIN_TO_SEC) + double (seconds / DEGREE_TO_MIN / MIN_TO_SEC);

    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
    cout << answer << " degrees" << endl;
    return 0;   
    
}


// Enter a latitude in degrees, minutes, and seconds :
// First, enter the degrees: 37
// Next, enter the minutes of arc:51
// Finally, enter the seconds of arc: 19
// 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees